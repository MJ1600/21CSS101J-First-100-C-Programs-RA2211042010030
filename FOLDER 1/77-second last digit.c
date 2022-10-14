#include<stdio.h>
int second-last digit (int N)
{
   printf("Register Number: RA2211042010030");

  N=N/10;
  return N%10;
  }
  int main()
  {
    int N, last digit, multiply;
    printf("Enter a number: ");
    scanf("%d", &N);
    last digit=N%10;
    printf("last digit: %d/n", last digit);
    printf("second-last digit: %d\n", second-last digit(N) );
    multiply = last digit*second-last digit(N);
    printf("Multiplication of last digit and second-last digit: %d", multiply);
    }
