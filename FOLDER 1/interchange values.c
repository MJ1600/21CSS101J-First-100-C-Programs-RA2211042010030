#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter value of a:");
  scanf("%d", &a);
  
  printf("Enter value of b: ");
  scanf("%d", &b);
  
  a=a+b;
  b=a-b;
  a=a-b;
  
  printf("\nAfter interchange values A = %d \n B = %d", a,b);
  return 0;
  }
