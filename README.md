# Starlight - BDSP Example 

This repository contains a fork of [Starlight](https://github.com/shadowninja108/Starlight), a switch modding template,
based on [Dialga](https://github.com/CraftyBoss/Dialga). 

It has been modified to use CMake and supports importing in CLion.
Additionally, it has tasks to easily integrate with [SimpleModManager](https://github.com/nadrino/SimpleModManager).

To get started, copy `config.cmake.template` to `config.cmake` and change the IP to the IP of your switch.

## Prerequisites

- [devkitPro](https://devkitpro.org/) 
- Python 3
- The [Keystone-Engine](https://www.keystone-engine.org/) Python Module

## Building

Build has only been tested on Arch Linux.

Simply run:
```
$ cmake .           # Configure tasks
$ make starlight    # build tree
$ make send         # optional: send to switch using ftp 
```

To use SimpleModManager:
```
$ cmake .                      # Configure tasks
$ make starlight_modmanager    # build tree
$ make send_modmanager         # optional: send to switch using ftp 
```

## Installing (Atmosphère)

After a successful build, simply transfer the files located inside `starlight_patch_(Version Number)` to the root of your switch's SD card.

## Credits

- CraftyBoss - The initial Dialga repository

---

# Starlight (Original README)
An enviroment for linking to Splatoon 2 executable and implementing hooks.

# Contributors
- [3096](https://github.com/3096)
- [khang06](https://github.com/khang06)
- [OatmealDome](https://github.com/OatmealDome)
- [Random0666](https://github.com/random0666)
- [shadowninja108](https://github.com/shadowninja108)
- [shibbo](https://github.com/shibbo) - Repo based on their work on OdysseyReversed
- [Thog](https://github.com/Thog) - Expertise in how rtld is implemented

# Credits
- devkitA64
- libnx - switch build rules
