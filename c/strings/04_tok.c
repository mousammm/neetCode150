#include <stdio.h>
#include <string.h>

/*
  strtok()
    not thread safe (ignore)
  strtok_t()
    thread safe
    ;;; is 1
  strsep()
    ;;; is 3
 */

int main()
{
  char* str = strdup("cat:dog:;cow:kela:;;nana:;;lol");
  char* tok;

#if 0 /* strtok */
  while(tok != NULL) {
    printf("%s\n", tok);
    tok = strtok(NULL, " ");
  }
#endif

#if 0 /* strtok_t */
  while((tok = strtok_r(str, ":,", &str))) {
    printf("%s\n", tok);
  }
#endif

#if 1 /* strsep */
  while((tok = strsep(&str, ",:;")) != NULL) {
    printf("%s\n", tok);
  }
#endif

  return 0;
}
