#include <stdio.h>
#include <string.h>

int main()
{
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
