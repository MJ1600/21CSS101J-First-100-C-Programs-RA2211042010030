#include <stdio.h>
int main()
{
  float height, weight, BMI;
  printf("Register number: 2211042010030\n");

  printf("Enter height in meter\n");
  scanf("%f", &height);
  printf("Enter weight in Kg\n");
  scanf("%f", &weight);
  
  BMI = weight/(height*height);
  
  printf("Your body Mass Index (BMI) is %f \n", BMI);
  
  return 0;
}
