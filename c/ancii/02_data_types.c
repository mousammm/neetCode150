#if 0 /* decalring a var */
<storage_class> <qalifiers> <modifiers> <baseType> identifier;

Identifiers:
  _camelCase

BaseType:
  int     32bit
  char     8bit
  float   32bit   ~6  digit   3.14f
  double  64bit   ~15 digit   3.14
  void    used in function for (argument or return type)

Type Modifiers: used to change range (int/char)
    signed      : +/-       int/char
    unsigned    : +         int/char
    short       : 16bits    int
    long        : 16bits    int/double

Type Qalifiers: how an obj can be accesed or modified by the program and the compiler
    const       : cant change after initilization
    volatile    : can change unexpecteadly i.e hardware  
    restrict    : optimization hint, only pointers can access
    _Atomic     : optimization on the variable are theread safe and invisible

Storage Class: define the scope(visibility) duration and memory location of a variable and function
    auto        : default for all variable
    register    : suggest compiler to store the variable in register
    static      : tell the compiler to restrict the variabel even after it goes out of scope
    extern      : give refernce to global var that is decalred in another variable
#endif

#if 0 /* extra */
struct
union
enum

typedef
typecasting
#endif
