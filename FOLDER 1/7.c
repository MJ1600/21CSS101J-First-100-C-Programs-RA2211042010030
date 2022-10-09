//Find area of rectangle

#include <stdio.h>
int main()
{
  int x;
  printf("Enter x\n");
  scanf("%d", &x);
  
  int y;
  printf("Enter y\n");
  scanf("%d", &y);
  
  int area_of_rectangle;
  area_of_rectangle = x * y;
  printf("Area of rectangle = %d", area_of_rectangle);
  return 0;
}
