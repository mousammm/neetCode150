// single line comment
/* Multiline comment */

#include <stdio.h> // system headers search in system directory
#include ""        // local headers search in locally

int main() /* entry point */
{

#if 0 // DATA TYPES
  /* Primitives data types */
  int    a = 10; // 4bytes
  char   b = 'B'; // 1bytes
  float  c = 3.14f; // 4bytes (~6 decimal point)
  double d = 3.14; // 8bytes (~15 decimal point)
  void fun_name(); // return type of fun

  /* User def data types */
  struct/enum/union
#endif

#if 0 // OPERATORS
#endif

#if 0 // Control flow
#endif

#if 0 // loops
#endif

#if 0 // Functions 
#endif

#if 0 // Arrays
#endif

#if 0 // Pointers
#endif

#if 0 // Strings
  link: (./glibc/strings)
#endif

#if 0 // PREPROCESSOR STUFF
#define ABC "hello"
#endif

  printf("Hello, World!\n");
  return 0;
}
