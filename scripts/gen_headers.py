# Uses il2cppdumper output to generate header stubs
import json
import os.path


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


def main():
    with open("script.json") as fp:
        data = json.load(fp)

    for method in data["ScriptMethod"]:
        clazz, meth = method["Name"].split("$$")
        exists, fp = get_or_create_file("include/il2cpp/" + clazz.replace(".", "/") + ".h")
        if not exists:
            fp.write('#pragma once\n\n#include "il2cpp.h"\n\n')
        fp.write(method["Signature"] + "\n")
        fp.close()


if __name__ == "__main__":
    main()
