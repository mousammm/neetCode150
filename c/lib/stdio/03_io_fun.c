#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>

#if 0
FILE:
  fopen : open a file return a FILE*
  fclose: flush and close file
  remove: remove a file
  rename: rename a file

File seeking:
  fseek : get to the specified pos
  ftell : current position
  rewind: back to start

Error/status:
  perror(msg) : print msg + system error to stderr
  errno       : global error code (set on failure)
#endif

int main()
{
  /* Open the file */
  FILE* fp = fopen("./01_basic_io.c", "r");
  if (fp == NULL) {
    /* both does the same thing */
    perror("fopen");
    fprintf(stderr, "[ERROR]: %s\n", strerror(errno)); /* include <errno.h> */
    return 1;
  }

  /* method(1): 1 Get the size */
  fseek(fp, 0, SEEK_END);
  long size_1 = ftell(fp);
  rewind(fp);

  /* 
   * method(2): Get the size
   * #include <sys/stat.h>
   */
  struct stat st;
  fstat(fileno(fp), &st);
  off_t size_2 = st.st_size;

  /*
   * Read in use in I/O fun
   * use of loops and the return <> of io fun will be usefull
   */
  char buff[size_2+1];
  fread(buff, size_2, size_2, fp);
  printf("file content: %s\n", buff);

  fclose(fp);
  return 0;
}
