# Uses il2cppdumper output to generate header stubs
import json
import os.path
import re
import subprocess

import cxxfilt


def mkdir_recurse(path: str):
    parts = path.split("/")
    parent = "/".join(parts[:-1])
    if parent and not os.path.exists(parent):
        mkdir_recurse(parent)

    print(f"Creating directory: {path}")
    os.mkdir(path)


def get_or_create_file(path: str):
    parent = "/".join(path.split("/")[:-1])
    if not os.path.exists(parent):
        mkdir_recurse(parent)
    return os.path.exists(path), open(path, "a")


def gen_il2cpp():
    with open("script.json") as fp:
        data = json.load(fp)

    for method in data["ScriptMethod"]:
        clazz, meth = method["Name"].split("$$")

        # Twice because my regex is bad
        matches = re.findall(r"(?<![<a-zA-Z., ])\s*[a-zA-Z0-9.]+\s*(?![>a-zA-Z., ])", clazz)
        for m in matches:
            clazz = clazz.replace(m, m.replace(".", "/"))

        exists, fp = get_or_create_file("include/il2cpp/" + clazz
                                        .replace("<", "_")
                                        .replace(">", "_")
                                        .replace(",", "_")
                                        .replace(" ", "_")
                                        .replace("|", "_")
                                        + ".h")
        if not exists:
            fp.write('#pragma once\n\n#include "il2cpp.h"\n\n')
        fp.write(re.sub(r"MethodInfo_\d[A-Z\d]+", "MethodInfo", method["Signature"]).replace("MethodInfo* method", "MethodInfo* method_info") + "\n")
        fp.close()


def gen_sdk():
    # TODO: Classes and return types?
    proc = subprocess.run(["aarch64-none-elf-objdump", "-T", "data/sdk.elf"], stdout=subprocess.PIPE)
    lines = proc.stdout.decode().split("\n")
    lines.sort()
    ns = {}

    for line in lines:
        current_ns = ns
        if not line.strip() or not line[0].isnumeric():
            continue

        parts = re.split(r"\s+", line)
        if len(parts) < 6:
            continue

        addr = int(parts[0], 16)
        func = cxxfilt.demangle(parts[5])

        if any(x in func for x in ("<", "typeinfo for", "vtable for", "typeinfo name", ".protected", "thunk", "guard variable")):
            continue

        if "(" not in func:
            continue

        print(hex(addr), func)

        while func.count("::") > 1:
            name, *func = func.split("::")
            func = "::".join(func)

            if not name.islower() or "(" in name:
                func = f"{name}::{func}"
                break

            new_ns = current_ns.get(name) or {}
            current_ns[name] = new_ns
            current_ns = new_ns

        fns = current_ns.get("___functions") or {}
        fns[addr] = func
        current_ns["___functions"] = fns

    def generate(dirname: str, obj: dict):
        # TODO
        for k, v in obj.items():
            if k != "___functions":
                if dirname and not os.path.exists("include/" + dirname):
                    pass  # mkdir_recurse("include/" + dirname)
                generate(f"{dirname}/{k}" if dirname else k, v)
            else:
                print("In file:", "include/" + (dirname or "sdk") + ".h")
                nss = dirname.split("/")
                for ns in nss:
                    print(f"    namespace {ns} {{")
                for fn in v.values():
                    print("    " + fn + ";")
                for _ in nss:
                    print("    }")

                # with open("include/" + (dirname or "sdk") + ".h", "w") as fp:
                #     fp.write("#pragma once\n\n#include \"nn.h\"\n\n")
                #     nss = dirname.split("/")
                #     for ns in nss:
                #         fp.write(f"namespace {ns} {{\n")
                #     for fn in v.values():
                #         fp.write(fn + ";\n")
                #     for _ in nss:
                #         fp.write("}\n")

    generate("", ns)


def main():
    gen_sdk()


if __name__ == "__main__":
    main()
