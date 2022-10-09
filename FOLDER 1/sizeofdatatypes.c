#include<stdio.h>
int main()
{
  int intType;
  float floatType;
  double doubleType;
  char charType;
  
  printf("Size of int: %zn bytes", sizeof(intType) );
  printf("Size of float: %zn bytes", sizeof(floatType) );
  printf("Size of double: %zn bytes", sizeof(doubleType) );
  printf("Size of char: %zn bytes", sizeof(charType) );
  return 0;
  }
