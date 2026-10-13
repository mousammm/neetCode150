#if 0
Arithemetic Operators   : + - * / %
    gatch % : only works on int not on float
Relational Operators    : == != < > <= >=
Logical Operators       : && || !
Bitwise Operators       : & | ~ ^ << >>
Assignment Operators    : = += -= *= /= %= &= |= ^= <<= >>=
Uninary Operators       : ++ -- - + sizeof(<dataType>) &x *p (<dataType>)x
Others:
    (<condtion>) ? (a) : (b)
    []  : array subscript : *(a + 1)
    .   : member access (struct/union/enum)
    ->  : pointer access (struct/union/enum)
    ( ) : function call
    ,   : comma operator
```

  ///////////////////////////////////////
  // Typecasting
  ///////////////////////////////////////

  // Every value in C has a type, but you can cast one value into another type
  // if you want (with some constraints).

  int x_hex = 0x01; // You can assign vars with hex literals
                    // binary is not in the standard, but allowed by some
                    // compilers (x_bin = 0b0010010110)

  // Casting between types will attempt to preserve their numeric values
  printf("%d\n", x_hex); // => Prints 1
  printf("%d\n", (short) x_hex); // => Prints 1
  printf("%d\n", (char) x_hex); // => Prints 1

  // If you assign a value greater than a types max val, it will rollover
  // without warning.
  printf("%d\n", (unsigned char) 257); // => 1 (Max char = 255 if char is 8 bits long)

  // For determining the max value of a `char`, a `signed char` and an `unsigned char`,
  // respectively, use the CHAR_MAX, SCHAR_MAX and UCHAR_MAX macros from <limits.h>

  // Integral types can be cast to floating-point types, and vice-versa.
  printf("%f\n", (double) 100); // %f always formats a double...
  printf("%f\n", (float)  100); // ...even with a float.
  printf("%d\n", (char)100.0);

