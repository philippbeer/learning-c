#include <stdio.h>
#include <limits.h>

int main()
{
  printf("### List of all data type lengths\n");
  printf("Char %d\n", CHAR_BIT);
  printf("Char %d - %d\n", CHAR_MIN, CHAR_MAX);
  printf("Int %d - %d\n", INT_MIN, INT_MAX);
  printf("Long %ld - %ld\n", LONG_MIN, LONG_MAX);
  printf("Long Long %lld - %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
  printf("Short %d - %d\n", SHRT_MIN, SHRT_MAX);
  printf("unsigned char %d\n", UCHAR_MAX);
  printf("unsigned int %d\n", UINT_MAX);
  printf("unsigned long %lu\n", ULONG_MAX);
  printf("unsigned long long %llu\n", ULONG_LONG_MAX);
  printf("unsigned short %d\n", USHRT_MAX);
}

