#include <stdio.h>
#include <string.h>

/*
 * strtok()
 * strtok_t()
 * strsep()
 */

#if 0
  char* str = strdup("This is a string");
  char* tok = strtok(str, " ");

  while(tok != NULL) {
    printf("%s\n", tok);
    tok = strtok(NULL, " ");
  }
}
#endif

int main()
{
  char* str = strdup("cat:dog,dogi:kela:nana::lol");
  char* tok;
  char* str_r = str; // save pointer

  while((tok = strtok_r(str_r, ":,", &str_r))) {
    printf("%s\n", tok);
  }

  return 0;
}
