#include <stdio.h>
#include <assert.h>

#define NODEBUG 
// remove assert in release build
// gcc -DNODEBUG assert.c

int main()
{
  assert(1 > 3);
  //true:  do nothing
  //false: exit the program with log
  return 0;
}
