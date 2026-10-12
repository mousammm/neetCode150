#include <stdio.h>
#include <string.h>

int main()
{
  // COPY
  char str_src[20] = "Hello World";
  char str_dst[5];
  /*
   * Returns pointer to the beginning of the dst string
   * strcpy(str_dst, str_src);
   * strncpy(str_dst, str_src, sizeof(str_dst)); 
   *
   * Returns pointer to the end of the dst string
   * stpcpy(str_dst, str_src);
   * stpncpy(str_dst, str_src, sizeof(str_dst)); 
   */
  str_dst[sizeof(str_dst)-1] = '\0';
  printf("strcpy: %s\n", str_dst);

  // CONCATATION
  /* NOTE: dst > strlen(dst) + strlen(src) + 1(for \0); */
  char strcat_dst[20] = "Hello ";
  strcat(strcat_dst, "world"); // dst = "Hello world0";
  printf("string after strcat: %s\n", strcat_dst);

  return 0;
}
