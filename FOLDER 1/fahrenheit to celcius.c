#include <stdio.h>
int main()
{ 
   float a;
   printf("Enter Temperature in Fahrenheit: ");
   scanf("%f",&a);
   float b = ( (a-32)*5)/a;
   printf("Temperature in Celcius is %f\n", b);
   }
