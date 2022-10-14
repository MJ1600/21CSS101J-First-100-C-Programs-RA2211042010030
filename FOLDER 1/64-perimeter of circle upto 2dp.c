#include <stdio.h>
void main()
{
    printf("Register Number: RA2211042010030");

   float PI=3.14, radius, perimeter;
  printf("Enter radius of the circle: ");
  scanf("%f", &radius);
  perimeter = 2*PI*radius;
  printf("Perimeter of the circle = % 0.2f", perimeter);
}
