/*
    // single line comment
    Multiline comment
*/

// <> : tell compiler to look into the system path
// "" : tell compiler to look in the local/relative path
#include <stdio.h>
#include "my_header.h" // local file
#include "./lib/lib.h" // relative path

// ENTRY POINT of our program
// argc : number of arguments
// argv : an array of character arrays
// argv[0] = name of your program, argv[1] = first argument, etc.
int main(int argc, char **argv)
{
    return 0;
}
