#include <stdio.h>
void main()
{
    printf("Register Number: RA2211042010030");

   float centi, fahren;
   printf("Enter fahrenheit temperature \n");
   scanf("%f", &fahren);
   centi = 5.0/8.0*(fahren-32);
   printf("\n The centigrade temperature is %6.2f",centi);
   }
