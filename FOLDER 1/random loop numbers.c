#include<stdio.h>
int main()
{
  /* This program generates a series of random numbers used as test data for another program by using the rand() function */
  
  int loop_control;
  
  loop_control = 0;
  
  while ( loop_control <= 9)
  {
    printf( "%d\n", rand() );
    loop_control++;
    }
 }
