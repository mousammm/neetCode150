// constants
#define SCREEN_WIDTH 800
#define PI 3.14159

// function like macro
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQAURE(x) ((x) * (x))

// multi line macro
#define PRINT_POINT(x, y) \
  printf("X: %d\n", x); \
  printf("Y: %d\n", y);

// Preprocessor macros
#define TO_STRING(x) #x             // TO_STRING(hello) "hello"
#define VAR_NAME(n) int user_##n    // VAR_NAME(1)      int user_1

// debug output
#ifdef DEBUG
  #define LOG(format, ...) \
    do { \
      printf("[DEBUG] [%s:%d in %s]: " format "\n", \
             __FILE__, __LINE__, __func__, ##__VA_ARGS__); \
    } while(0)
#else
  #define LOG(format, ...)
#endif

// assert
#include <stdio.h>
#include <stdlib.h> // Required for abort()

#ifdef DEBUG
  #define ASSERT(expression) \
    do { \
      if (!(expression)) { \
        fprintf(stderr, "[ASSERT FAILED] [%s:%d in %s]\n" \
                        "  Expression: (%s)\n", \
                __FILE__, __LINE__, __func__, #expression); \
        abort(); \
      } \
    } while(0)
#else
  #define ASSERT(expression)
#endif
