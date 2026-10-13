#include <stdio.h>
#include <errno.h>  /* errno */
#include <string.h> /* perror, strerror */

int main()
{
  FILE* p = fopen("NOT_A_FILE", "r");
  if (p == NULL) {
    /* Both do the same thing */
    perror("fopen");
    fprintf(stderr, "[ERROR]: %s\n", strerror(errno));
  }

  return 0;
}
