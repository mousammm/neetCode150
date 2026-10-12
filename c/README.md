# LIB C & POSIX
```
ISO C / stdlibc(libc)
  FLOW: app -> glibc -> os(kernel)
  glibc musl bionic msvcrt

POSIX(Portable OS Interface)
  Its is blueprint, rulebook
  any posix c code can compile in any posix complient os
  It standardies
    syscalls
    cmd line utilities
    shell scripting(/usr/bin)
```

# About C
```
  c89/c90: also called ANSII C

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

# ISO C / stdlib
* [stdio](./stdio/)
* [stdlib](./stdlib/)
* [string](./strings/)
* [ctype]()
* [math]()
* [stdint]()
* [assert](./assert.c)
* [errno](./errno.c)

# POSIX
* unistd
* fcntl
* sys/types
* sys/socket

# POSIX EXT
* sys/stat
* sys/mman
* sys/wait
* sys/select
 
# Networking
* netinet/in
* arpa/inet
* sys/epoll
