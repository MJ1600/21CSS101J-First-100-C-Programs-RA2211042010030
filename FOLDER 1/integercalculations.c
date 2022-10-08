#include<stdio.h>
void main()
{
   int a,b;
   printf("Enter any two integer values: ");
   scanf("%i %i, &a,&b);
   
   printf("%i+%i=%i\n", a,b,(a+b) );
   printf("%i-%i=%i\n", a,b,(a-b) );
   printf("%i*%i=%i\n", a,b,(a*b) );
   printf("%i/%i=%i\n", a,b,((float)a/b) );
   printf("%i%%i=%i\n", a,b,(a%b));
   }
