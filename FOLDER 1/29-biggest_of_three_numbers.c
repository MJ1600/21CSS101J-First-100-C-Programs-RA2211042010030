#include <stdio.h>
int main()
{ 
    printf("Register Number: RA2211042010030");

   int a,b,c;
   printf("Enter number a\n");
   scanf("%d",&a);
   printf("Enter number b\n");
   scanf("%d", &b);
   printf("Enter number c\n");
   scanf("%d", &c);
   if(a>b && a>c);
  { printf("a is the largest: ", a);}
   if(b>c && b>a);
  { printf("b is the largest: ", b);}
   if(c>a && c>b);
  { printf("c is the largest: ", c);}
  return 0;
}
