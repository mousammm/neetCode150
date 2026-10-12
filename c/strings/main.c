#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
  Strings in c is just a char array ending with '\0' null byte.

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
  // CREATING A STRING
  /*
   * Array : char crt_s1[] = "Hello";
   *
   * Pointer :
   *   stack: char* crt_s2  = "Hello"; // string literal cat modify
   *   heap:  char* crt_s3  = strdup("Hello"); // can modify, free(crt_s3);
  */

  // LENGTH
  char* check_length = "Lenght of this string";
  size_t len_S1 = strlen(check_length); // it could crash if it never find null byte
  size_t len_S2 = strnlen(check_length, 100); // safer it only checks till 100 bytes
  printf("lenght using strlen: %zu\n", len_S1);
  printf("lenght using strnlen: %zu\n", len_S2);

  // STRCPY VS STRDUP
  /*
   * strcpy() 
   *  give array/memory(need)
   *  just copies char
   * strdup() 
   *  creates memory, 
   *  then copies
   */

  // DUPLICATE : returns pointer to the 1st char in heap, must free it
  char* dup_str1 = strdup("Hello world");

  // COPY
  char str_src[20] = "Hello World";
  char str_dst[5];
  /*
   * strcpy(str_dst, str_src); 
   * copies whole src into dst including \0, if dst small it will crash
   * return pointer to the 1st char in the dst string
   * strcpy dosent check if src will fit in dst
   *
   * strncpy(str_dst, str_src, sizeof(str_dst)); 
   * only copy a part of src to dst, no undefined behaviour
   *
   * Tip after copying replace the last ele with \0
   */
  strncpy(str_dst, str_src, sizeof(str_dst)); 
  str_dst[sizeof(str_dst)-1] = '\0';
  printf("strcpy: %s\n", str_dst);

  // CONCATATION
  /*
   * NOTE: dst > strlen(dst) + strlen(src) + 1(for \0);
   *
   * char dst[20] = "Hello ";
   * strcat(dst, "world");
   * appends to dst
   * dst must already have \0 at end and enough space
   *
   *
   */
  strncat

  // COMPARISION
  char str_cmp1[] = "HELLO WORLD";
  char str_cmp2[] = "HELLO WORLD";
  /*
   * strcmp();
   * ret   s1, s2
   * < 0: (A,  a) 1st non matching char is s1 < s2
   * < 0: (x,  y) strings are not equal
   * > 0: (a,  A) 1st non matching char is s1 > s2
   */
  if (strcmp(str_cmp1, str_cmp2) == 0) {
    printf("str_cmp1 == str_cmp2\n");
  } else {
    printf("str_cmp1 != str_cmp2\n");
  }

  return 0;
}
