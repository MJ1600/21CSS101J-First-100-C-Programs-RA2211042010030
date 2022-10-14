#include <stdio.h>
int main()
{
   printf("Register Number: RA2211042010030");

  int i, fact = 1, number;
  printf("Enter a number :");
  scanf("%d", &number);
  for(i = 1; i<=number; i++)
  {  fact = fact*i; }
  printf("Factorial pf %d is : %d", number,fact);
  return 0;
  }
