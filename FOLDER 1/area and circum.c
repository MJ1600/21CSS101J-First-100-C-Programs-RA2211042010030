#include<stdio.h>
int main()
{
   int rad;
   float PI=3.14, area, circumference;
   
   printf("\n Radius: ");
   scanf("%d",&rad);
   
   area=PI*rad*rad;
   printf("\nArea: %f",area);
   
   circumference=2*PI*rad;
   printf("Circumference: %f",circumference);
   return 0;
   }
