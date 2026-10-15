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

                  // return
int *a(int a);    // * to int
int (*a)(int a);  // * to <int x(int)>

int (*)(int);        // type of function
int (*f)(int) = add; // decalare and init fun pointer

// array of fun pointer
int (*fun[])(int, int) = { add, sub };
fun[0] = add; // <int add(int, int)>
fun[1] = add; // <int sub(int, int)>

// fun * as fun argument eg qsort
int f(int a, bool (*val)(int));

// returning fun pointer
// takes:  fun(int c);
// return: <int name(int, int)>
int fun(int c) {
  return <int fun(int, int)>;
}
int (*fun(int c))(int, int) {
  return add;
}
#endif

int main() { return 0; }
