#include <stdio.h>

#if 0
What is FILE*
* a file
* a pipe
* socket
* stdin (fd 0)
* stdout(fd 1)
* stderr(fd 2)

Formatted IO:
  scanf  / printf  : stdin/stdout
  fscanf / fprintf : FILE*
  sscanf / snprintf: char[]

Line/string:
  -----/puts : stdout
  fgets/fputs: stdin/stdout

Char:
  getchar / putchar : stdin/stdout
  getc    / putc    : FILE* (macro)
  fgetc   / fputc   : FILE* (real function)

Bytes:
  read  / write  : unbuffered, os, bytes, slow, unstructured data
  fread / fwrite : FILE* buffered, fast, structured data

Fun stuff
  ungetc
  setvbuf and fsync

#endif

int main()
{
  return 0;
}
