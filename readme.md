On Windows:

go to:
https://www.msys2.org/

and download the installer...
run it...

$pacman -S --needed base-devel gdb mingw-w64-x86_64-toolchain

chose: mingw-w64-x86_64-gcc

go to Environment Variables:
PATH = D:\msys64\mingw64\bin
and
PATH = D:\msys64\usr\bin

open CMD and run:

g++ --version

