#include<stdio.h>
int main()
{
  char c;
  
  /* gets a character from the terminal */
  printf("Please enter a character: ");
  c = getchar();
  
  /*print the character on the terminal*/
  putchar(c);
  putchar('\n');
  }
