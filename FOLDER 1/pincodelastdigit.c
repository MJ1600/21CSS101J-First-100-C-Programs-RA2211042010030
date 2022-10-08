#include<stdio.h>
int third-last digit(intN)
{
 N=N/100;
 return N%10;
 }
 int second-last digit(int N)
 {
   N=N/10;
   return N%10;
   }
   int main()
   {
    int N, last digit;
    printf("Enter number:");
    scanf("%d", &N);
    last digit=N%10;
    printf("last three digit are %d%d%d%d", third last digit(N), second last digit(N), last digit);
    }
