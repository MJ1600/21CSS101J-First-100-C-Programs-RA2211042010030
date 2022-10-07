#include <stdio.h>
void main()
{
   float prin, noy, roi, intrst;
   printf("Enter principal \n");
   scanf("%f", &prin);
   printf("Enter number of years \n");
   scanf("%f", &noy);
   printf("Enter rate of interest \n");
   scanf("%f", &roi);
   intrst=(prin*noy*roi)/100;
   printf("\n Interest %6.8f", intrst);
   }
