#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
  Strings in C is just a char array ending with '\0' null terminator.

  2 ways to create strings in c:

  ARRAYS: memory is in control, can modify the string
    char s[] = "Hello world";
    s[0] = 'f'; // can modify

  POINTER
    STACK: string literal(read only), cant modify
     char *s = "Hello world";
     s[0] = 's'; // can't modify strig literal
    DYNAMIC: can change !(read only)
     char *s = malloc(20 * sizeof(char));
     s[0] = 's'; can modify strig literal
     free(s); // release the allocated memory
*/

int main()
{
  // LENGTH
  printf("lenght using strlen !(null ter): %zu\n", strlen("Hello world"));

  // DUPLICATE : returns pointer to the 1st char in heap, must free it
  char* dup_str1 = strdup("Hello world"); // can modify this string
  free(dup_str1);


  return 0;
}
