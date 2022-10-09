#include <stdio.h>
void main()
{
   float PI=3.14, radius, perimeter;
  printf("Enter radius of the circle: ");
  scanf("%f", &radius);
  perimeter = 2*PI*radius;
  printf("Perimeter of the circle = % 0.2f", perimeter);
}
