#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter 2 numbers: ");
  scanf("%d, %d" &a, &b);
  c=a;
  a=b;
  b=c;
  printf("After swap: %d, %d", a,b );
  }
