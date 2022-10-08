#include<stdio.h>
void main()
{
  int a,b;
  
  printf("Enter any two integer values: ");
  scanf("%i %i", &a,&b);
  
  printf("sum=%i\n", (a+b) );
  printf("product=%i\n", (a*b) );
  printf("division=%f\n", ((float) a/b) );
  printf("remainder=%i\n", (a%b) );
  }
  
  
