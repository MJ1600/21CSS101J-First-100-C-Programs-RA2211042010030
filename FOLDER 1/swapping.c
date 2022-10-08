#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter two integers: ");
  scanf("%i %i",&a,&b);
  printf("Before Swapping a=%i,b=%i\n",a,b);
  
  int temp=b;
  b=a;
  a=temp;
  printf("After Swapping a=%i, b=%i",a,b);
  }
