#include<stdio.h>
void main()
{
  int a, b, c, d, e, sum;
  float avg;
  printf("Enter the values for 5 variables: ");
  scanf("%d %d %d %d %d ", &a, &b, &c, &d, &e);
  sum = a+b+c+d+e;
  avg=sum/5;
  printf("Sum of 5 marks: %d", sum);
  printf("avg of 5 marks: %f", avg);
  }
