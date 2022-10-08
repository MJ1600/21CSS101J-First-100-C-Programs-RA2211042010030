#include <stdio.h>
int main()
{
  float side1, side2, height, area;
  printf("Enter the height and parallel sides of the trapezium respectively \n");
  scanf("%f %f %f", &height, &side1, &side2);
  area = 0.5*(side1+side2)*height;
  printf("Area of trapezium = %f\n",area);
  return 0;
  }
