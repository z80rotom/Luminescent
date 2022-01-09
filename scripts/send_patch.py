from ftplib import FTP, error_perm
import os
import sys


def list_dirs(connection, _path):
    file_list, dirs, nondirs = [], [], []
    try:
        connection.cwd(_path)
    except error_perm:
        return []

    connection.retrlines('LIST', lambda x: file_list.append(x.split()))
    for info in file_list:
        ls_type, name = info[0], info[-1]
        if ls_type.startswith('d'):
            dirs.append(name)
        else:
            nondirs.append(name)
    return dirs


def ensure_directory(connection, root, path):
    print(f"Ensuring {os.path.join(root, path)} exists...")
    if path not in list_dirs(connection, root):
        connection.mkd(f'{root}/{path}')


def main():
    console_ip = sys.argv[1]
    root_dir = sys.argv[2]
    if '.' not in console_ip:
        print(sys.argv[0], "ERROR: Please specify with `IP=[Your console's IP]`")
        sys.exit(-1)

    console_port = 5000

    cur_dir = os.curdir

    ftp = FTP()
    print(f'Connecting to {console_ip}... ', end='')
    ftp.connect(console_ip, console_port)
    ftp.login("switch", "password")
    print('Connected!')

    patch_directories = []

    # # Find patch folder
    # root, dirs, _ = next(os.walk(cur_dir))
    # for dir_name in dirs:
    #     if dir_name.startswith("starlight_patch_"):
    #         patch_directories.append((os.path.join(root, dir_name), dir_name))
    patch_directories.append(root_dir)

    # Copy over the entire patch tree
    for dir_path in patch_directories:
        for root, dirs, files in os.walk(dir_path):
            root = root.replace(root_dir, "")

            for dir_name in dirs:
                ensure_directory(ftp, root, dir_name)

            for file in files:
                if not file.endswith(".elf"):  # makefile generates some .elf files we don't need
                    print(f"Sending file {root}/{file}")
                    ftp.storbinary(f'STOR {root}/{file}', open(dir_path + root + "/" + file, "rb"))


if __name__ == "__main__":
    main()
