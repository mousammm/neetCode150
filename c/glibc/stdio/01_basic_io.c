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

#if 0 /* format specifiers */
// Special characters:
'\a'; // alert (bell) character
'\n'; // newline character
'\t'; // tab character (left justifies text)
'\v'; // vertical tab
'\f'; // new page (form feed)
'\r'; // carriage return
'\b'; // backspace character
'\0'; // NULL character. Usually put at end of strings in C.
//   hello\n\0. \0 used by convention to mark end of string.
'\\'; // backslash
'\?'; // question mark
'\''; // single quote
'\"'; // double quote
'\xhh'; // hexadecimal number. Example: '\xb' = vertical tab character
'\0oo'; // octal number. Example: '\013' = vertical tab character

// print formatting:
"%d";    // integer
"%3d";   // integer with minimum of length 3 digits (right justifies text)
"%s";    // string
"%f";    // float
"%ld";   // long
"%3.2f"; // minimum 3 digits left and 2 digits right decimal float
"%7.4s"; // (can do with strings too)
"%c";    // char
"%p";    // pointer. NOTE: need to (void *)-cast the pointer, before passing
         //                it as an argument to `printf`.
"%x";    // hexadecimal
"%o";    // octal
"%%";    // prints %
#endif

int main()
{
  return 0;
}
