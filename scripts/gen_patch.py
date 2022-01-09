import ctypes
import os
import re
import struct
import sys

from keystone import Ks, KS_ARCH_ARM64, KS_MODE_LITTLE_ENDIAN

PATCH_DIR = "patches"
PATCH_EXTENSION = ".slpatch"

NSO_HEADER_LEN = 0x100
PATCH_CONFIG = os.path.join(PATCH_DIR, "maps.config")

IPS_OUT_DIR_NAME = "ips_patches"
IPS_FORMAT = ".ips"
IPS_HEADER_MAGIC = b"IPS32"
IPS_EOF_MAGIC = b"EEOF"

# globals
sl_map_file = ""
patch_config = {
    "build_id": {},
    "nso_load_addr": {},
    "map_file": {}
}
patch_list = {}


class Patch:
    def __init__(self, offset, length, content):
        self.offset = offset
        self.length = length
        self.content = content


def init_config(root_path):
    # read config file
    with open(os.path.join(root_path, PATCH_CONFIG)) as config_file:
        cur_config_name = None
        for line in config_file:
            line = line.strip()
            config_name_line_match = re.match(r'\[(.+)\]', line)
            if config_name_line_match:
                cur_config_name = config_name_line_match.group(1)
                continue

            if '=' in line:
                config_nso, config_value = line.split('=', 1)
                if not config_nso.isalnum():
                    continue
                if '+' in config_value:
                    print("gen_patch.py error:", line, "awaits implementation")
                    sys.exit(-1)
                patch_config[cur_config_name][config_nso] = config_value


def get_symbol_addr_from_map(target, regex_str, sym_str):
    map_file = None

    def get_found_pos_addr(start):
        regex_match = re.search(regex_str, map_file[start:])
        if not regex_match:
            return -1, -1

        found_line_pos = map_file.rfind('\n', 0, regex_match.span()[0] + start) + 1
        found_line_end_pos = map_file.find('\n', regex_match.span()[1] + start)
        found_line = map_file[found_line_pos:found_line_end_pos].strip()
        found_addr = int(found_line[:found_line.find(" ")].replace("00000000:00000071", ''), 16)

        return found_line_end_pos, found_addr

    if target in patch_config['map_file']:
        map_file = patch_config['map_file'][target]
        load_addr_adjustment = int(patch_config["nso_load_addr"][target], 16)
    else:
        map_file = sl_map_file
        load_addr_adjustment = int(patch_config["nso_load_addr"]["subsdk1"], 16)

    found_pos, first_found_addr = get_found_pos_addr(0)
    if found_pos == -1:
        raise NameError

    # check uniqueness
    while True:
        found_pos, more_found_addr = get_found_pos_addr(found_pos)
        if found_pos == -1:
            break

        if more_found_addr != first_found_addr:
            print("gen_patch.py error:", sym_str, "is ambiguous!")
            sys.exit(-1)

    # map stores signed address relative to starlight as unsigned?
    return load_addr_adjustment + ctypes.c_long(first_found_addr).value


def resolve_address_and_target(target, symbol_str):
    resolved_addr = 0

    # resolve + offset
    plus_split = symbol_str.split('+', 1)
    if len(plus_split) > 1:
        symbol_str = plus_split[0]
        resolved_addr += int(plus_split[1], 16)

    # resolve different nso target with '!' notation
    target_split = symbol_str.split('!', 1)
    if len(target_split) > 1:
        target = target_split[0]
        symbol_str = target_split[1]
    else:
        # if symbol is one of the nso targets
        if symbol_str in patch_config["nso_load_addr"]:
            target = symbol_str
            resolved_addr += int(patch_config["nso_load_addr"][symbol_str], 16)
            return target, resolved_addr

        # if symbol is in starlight
        func_str = symbol_str + r'\('
        try:
            addr_in_starlight = get_symbol_addr_from_map("starlight", func_str, symbol_str)
            # if no exception, then symbolStr is found is starlight
            resolved_addr += addr_in_starlight
            return target, resolved_addr
        except NameError:
            pass

    # if symbolStr is already an address
    try:
        resolved_addr += int(symbol_str, 16)
        resolved_addr += int(patch_config["nso_load_addr"][target], 16)
        return target, resolved_addr
    except ValueError:
        pass

    # search symbol in map
    regex_str = r'\w*'.join(re.findall(r'\w+', symbol_str))
    try:
        resolved_addr += get_symbol_addr_from_map(target, regex_str, symbol_str)
    except NameError:
        print("gen_patch.py error: cannot resolve", symbol_str)
        sys.exit(-1)

    return target, resolved_addr


def get_patch_bin(target, patch_address, patch_value_str):
    # bytes patch
    try:
        patch_bin = bytearray.fromhex(patch_value_str)
        print(hex(patch_address))
        print(patch_value_str)
        return patch_bin
    except ValueError:
        pass
    # string patch
    string_match = re.search(r'"(.+)"', patch_value_str)
    if string_match:
        return bytearray(bytes(string_match.group(1), 'utf-8').decode('unicode_escape') + '\0', 'utf-8')

    # asm patch
    branch_need_resolve_match = re.match(r'([Bb](?:[Ll]|\.ne)?\s+)([^\#]+$)', patch_value_str)
    if branch_need_resolve_match:
        target, to_addr = resolve_address_and_target(target, branch_need_resolve_match.group(2))
        patch_value_str = (branch_need_resolve_match.group(1) + '#' + hex(to_addr - patch_address))

    print(hex(patch_address))
    print(patch_value_str)
    ks = Ks(KS_ARCH_ARM64, KS_MODE_LITTLE_ENDIAN)
    encoded_bytes, ins_count = ks.asm(patch_value_str)
    return bytearray(encoded_bytes)


def add_patch_to_patchlist(target, patch_address, patch_content):
    if target not in patch_list:
        patch_list[target] = []
    patch_list[target].append(Patch(
        patch_address - int(patch_config["nso_load_addr"][target], 16) + NSO_HEADER_LEN,
        len(patch_content), patch_content))


def add_patch_from_file(patch_file_path):
    patch_version_all = "all"
    patch_vars = {
        "version": None,
        "target": "main"
    }

    with open(patch_file_path) as patch_file:
        file_lines_iter = iter(patch_file)
        is_in_multi_patch = False
        while True:
            # read next line
            if is_in_multi_patch:
                # multiPatch check already read new line; simply false the flag
                is_in_multi_patch = False
            else:
                try:
                    line = next(file_lines_iter)
                except StopIteration:
                    break
            line = line.split('/', 1)[0].strip()

            # if is patch variable line, e.g. [version=100]
            patch_var_line_match = re.match(r'\[(.+)\]', line)
            if patch_var_line_match:
                patch_var_matches = re.findall(r'(\w+)=(\w+)', patch_var_line_match.group(1))
                for match in patch_var_matches:
                    patch_vars[match[0]] = match[1]
                continue

            # parse patches
            address_split = line.split(' ', 1)
            is_in_multi_patch = address_split[0].endswith(':')
            if len(address_split) < 2 and not is_in_multi_patch:
                continue

            patch_target, patch_address = resolve_address_and_target(patch_vars["target"], address_split[0] if not is_in_multi_patch else address_split[0][:-1])
            patch_content = bytearray()

            if is_in_multi_patch:
                try:
                    line = next(file_lines_iter).split('/', 1)[0]
                    ident = re.search(r'\s+', line).group()
                    while True:
                        patch_content += get_patch_bin(patch_target, patch_address + len(patch_content), line.strip())
                        line = next(file_lines_iter).split('/', 1)[0]
                        if not line.startswith(ident):
                            break
                except StopIteration:
                    add_patch_to_patchlist(patch_target, patch_address, patch_content)
                    break
            else:
                patch_content = get_patch_bin(patch_target, patch_address, address_split[1])

            add_patch_to_patchlist(patch_target, patch_address, patch_content)


def main(root_path, map_path):
    init_config(root_path)
    with open(map_path, 'r') as f:
        global sl_map_file
        sl_map_file = f.read()

    for file in os.listdir(os.path.join(root_path, PATCH_DIR)):
        if file.endswith(PATCH_EXTENSION):
            add_patch_from_file(os.path.join(root_path, os.path.join(PATCH_DIR, file)))

    try:
        os.mkdir(IPS_OUT_DIR_NAME)
    except FileExistsError:
        pass

    for nso in patch_list:
        ips_out_path = os.path.join(IPS_OUT_DIR_NAME, patch_config["build_id"][nso] + IPS_FORMAT)
        with open(ips_out_path, 'wb') as ipsFile:
            ipsFile.write(IPS_HEADER_MAGIC)
            for patch in patch_list[nso]:
                ipsFile.write(struct.pack('>I', patch.offset))
                ipsFile.write(struct.pack('>H', patch.length))
                ipsFile.write(patch.content)
            ipsFile.write(IPS_EOF_MAGIC)
        print("gen_patch.py:", nso, "->", ips_out_path, "successful")


if __name__ == "__main__":
    main(*sys.argv[1:])
