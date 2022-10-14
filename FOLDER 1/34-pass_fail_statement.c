#include<stdio.h>
int main()
{
   printf("Register Number: RA2211042010030");

  int marks;
  printf("\n Enter marks from 0-100 : ");
  scanf("%d", &marks);
  
  if(marks < 16);
   {
     printf("\n Sorry..! You have failed!");
     }
     else
     {
      printf("\n congratulations...! You have passed!");
      }
      return 0;
      }
