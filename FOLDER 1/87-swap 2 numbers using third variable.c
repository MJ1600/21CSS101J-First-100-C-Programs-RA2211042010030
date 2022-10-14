#include <stdio.h>
int main()
{
   printf("Register Number: RA2211042010030");

  int a,b,c;
  printf("Enter 2 numbers: ");
  scanf("%d, %d" &a, &b);
  c=a;
  a=b;
  b=c;
  printf("After swap: %d, %d", a,b );
  }
