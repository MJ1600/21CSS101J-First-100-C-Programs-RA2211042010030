#include <stdio.h>
void main()
{
  int a=1, sum=0;
  while(a<=10)
  {  
  printf("%3d",a);
  sum = sum + a;
  a++;
  }
  printf("\n sum of 10 numbers : %d",sum );
  }
