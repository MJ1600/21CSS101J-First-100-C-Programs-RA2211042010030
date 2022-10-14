#include <stdio.h>
int main()
{
   printf("Register Number: RA2211042010030");

  int a,b,c;
  printf("Enter two variables before swapping: \n");
  printf("a: ");
  scanf("%d", &a);
  printf("b: ");
  scanf("%d", &b);
  printf("values stored in a: %d and b: %d", a,b);
  c=a;
  a=b;
  b=c;
  printf("\n Values after swapping a = %d amd b = %d", a,b);
  }
