/* Program to check odd or even */
#include<stdio.h>
void main()
{ 
   int no, m;
   printf("Enter number to check : ");
   scanf("&d", &no);
   m=no%2;
   if(m==1)
      printf("\n Given number is even");
   else
      printf("\n Given number is odd");
      }
