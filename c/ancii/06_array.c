#include <stdio.h>

#if 0 /* What is a array */
collection of elements of the same data,
stored in contiguous memory locations,
instead of declaring many separate variables, 
you use one array to store multiple values.
#endif

#if 0 
<data_type> <array_name>[<size>];

INITIALIZATION:
  int a[5] = {10, 20, 30, 40, 50};
  int a[5] = {10, 20};        // a = {10, 20, 0, 0, 0}
  int a[]  = {1, 2, 3, 4};    // size automatically = 4
  int a[3]; a[0] = 5; a[1] = 10; a[2] = 15;

ACCESSING ELEMENTS:
  index (0, size−1)
  int a[5]; 
  a[0 to (5-1)]

MEMORY LAYOUT:
  int a[5] (int = 4 bytes)
  'a' points to &a[0] — the base address.
  
  Index Address Value
  a[0] 1000 10
  a[1] 1004 20
  a[2] 1008 30
  a[3] 1012 40
  a[4] 1016 50

TYPES OF ARRAYS:
  1D Array int a[5];
  2D Array int a[3][4]; (matrix)
  3D Array int a[2][3][4];

POINTERS:
  int *p[3];       // 3 pointers
  int (*q)[3];     // 1 pointer to array of 3 ints

SIZE OF ARRAY:
  int a[10];
  int len = sizeof(a) / sizeof(a[0]);

VARIABLE LENGHT ARRAY:
  struct Data {
    int len;
    int arr[];
  };
  
  struct Data *d = malloc(sizeof(struct Data) + 5 * sizeof(int));
  d->len = 5;
  d->arr[0] = 10;
#endif

int main() { return 0; }
