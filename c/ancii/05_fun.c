#include <stdio.h>

#if 0
// function prototype
<return_type> <fun_name>(<para_type> <para_name>, ...);

<return_type> :
  In c function can return only on value
  Either a scalar(copied back)
  or a pointer(pointer)

  Arrays strings or multiple value are faked using pointers.
  When arrays are passed onto a function,
    it decays to pointer thus looses its size.
    and for strings same but as stings are \0 we can recalculate.

  NOTE> pointers must outlive the function call.
  ie, static or global
  ie, heap (malloc)
  ie, buffer (caller own memory)

// return copies    
int      f();
char     f();
float    f();
double   f();
void     f();
struct N f();
union  N f();
enum   N f(); 

// return a address
int*      f();
char*     f();
float*    f();
double*   f();
struct N* f();
union  N* f();
enum   N* f(); 

// return ARRAYS: same as pointers
#endif

#if 0 /* FUNCTION POINTER */
// funP takes a char, return a <int fun(int, int)>
int (*funP(char c))(int, int);

typedef int (*FUNP)(int, int);
FUNP funP(getC);
#endif

int main() { return 0; }
