# Porting to your kernel

> This section is incomplete!

To build uDRM, you need either GCC or Clang. You don't need a hosted toolchain,
uDRM can be compiled for a freestanding environment.

Porting is as "simple" as implementing all functions in `include/udrm/host/`.
Then simply link against the static library.
