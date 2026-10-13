# LIB C & POSIX
```
ISO C / stdard libary
  FLOW: app -> glibc -> os(kernel)
  DIFF STDLIB:
    glibc, musl, bionic, msvcrt

POSIX(Portable OS Interface)
  Its a blueprint, rulebook.
  Any POSIX c code can compile in any POSIX complient os.
  It STANDARDIES:
    syscalls
    cmd line utilities
    shell scripting(/usr/bin)
```

# About C
```
c89/c90: also called ANSII C
c99: stable and mature
c11: modern
c17: idk

Compilation:
  .c -> preprocessor -> .i   gcc -E main.c > main.i
  .i -> translate    -> .s   gcc -S main.i
  .s -> assembler    -> .o   gcc -C main.s
  .o -> compiler     -> bin  gcc main.o -o main

Std way to compile any c codebase:
  convert .c to .o
  convert .o to a single bin (Linking happens here)

Linking:
  Dynamic Linking(.so/.dll)
  Static Linking(.a/.lib)
```

## [compiling c prog](./gcc)
## [basic of c](./ancii)
## [glibc](./lib)
## [posix](./posix)
## [vendor](./vendor)
