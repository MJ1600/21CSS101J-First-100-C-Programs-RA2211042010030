#include<stdio.h>
int main()
{
    printf("Register Number: RA2211042010030");

   int num, i, e = 0;
   printf("Enter a number\n");
   scanf("%d", &num);
   for(i=2; i<=num/2; i++);
   {
      if(num %i==0)
       { 
        c++;
          break;
          }
          }
          if (c==0 &&num!=1)
           printf("%d is a prime number\n", num);
           else
              printf("%d is not a prime number\n", num);
              return 0;
              }
