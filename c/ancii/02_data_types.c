#if 0
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

typedef unsigned long long int u64;

///////////////////////////////////////
// User-defined types and structs
///////////////////////////////////////

// Typedefs can be used to create type aliases
typedef int my_type;
my_type my_type_var = 0;

// Structs are just collections of data, the members are allocated sequentially,
// in the order they are written:
struct rectangle {
  int width;
  int height;
};

// It's not generally true that
// sizeof(struct rectangle) == sizeof(int) + sizeof(int)
// due to potential padding between the structure members (this is for alignment
// reasons). [1]

void function_1()
{
  struct rectangle my_rec = { 1, 2 }; // Fields can be initialized immediately

  // Access struct members with .
  my_rec.width = 10;
  my_rec.height = 20;

  // You can declare pointers to structs
  struct rectangle *my_rec_ptr = &my_rec;

  // Use dereferencing to set struct pointer members...
  (*my_rec_ptr).width = 30;

  // ... or even better: prefer the -> shorthand for the sake of readability
  my_rec_ptr->height = 10; // Same as (*my_rec_ptr).height = 10;
}

// You can apply a typedef to a struct for convenience
typedef struct rectangle rect;

int area(rect r)
{
  return r.width * r.height;
}

// Typedefs can also be defined right during struct definition
typedef struct {
  int width;
  int height;
} rect;
// Like before, doing this means one can type
rect r;
// instead of having to type
struct rectangle r;

// if you have large structs, you can pass them "by pointer" to avoid copying
// the whole struct:
int areaptr(const rect *r)
{
  return r->width * r->height;
}

