#include <stdio.h>
#include <limits.h>

int main() {
  printf("The maximum value of an unsigned char is: %d\n", UCHAR_MAX);
  printf("The minimum value of an unsigned char is: %d\n", 0);
  printf("The maximum value of a signed char is: %d\n", CHAR_MAX);
  printf("The minimum value of a signed char is: %d\n", CHAR_MIN);

  printf("The maximum value of an unsigned short is: %d\n", USHRT_MAX);
  printf("The minimum value of an unsigned short is: %d\n", 0);
  printf("The maximum value of a signed short is: %d\n", SHRT_MAX);
  printf("The minimum value of a signed short is: %d\n", SHRT_MIN);

  printf("The maximum value of an unsigned int is: %u\n", UINT_MAX);
  printf("The minimum value of an unsigned int is: %d\n", 0);
  printf("The maximum value of a signed int is: %d\n", INT_MAX);
  printf("The minimum value of a signed int is: %d\n", INT_MIN);

  printf("The maximum value of an unsigned long is: %ld\n", ULONG_MAX);
  printf("The minimum value of an unsigned long is: %d\n", 0);
  printf("The maximum value of a signed long is: %ld\n", LONG_MAX);
  printf("The minimum value of a signed long is: %ld\n", LONG_MIN);

  /* Calculation of the range for integer (signed) */
  int i = 0;
  while (i + 1 > i)
    ++i;
  printf("The maximum value of a signed integer is: %d\n", i);

  while (i - 1 < i)
    --i;
  printf("The minimum value of a signed integer is %d\n", i);

  return 0;
}
