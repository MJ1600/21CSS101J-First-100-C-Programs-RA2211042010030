#include <stdio.h>
int main()
{
    printf("Register Number: RA2211042010030");

   int sub, array[10];
  
   printf( "sizeof(int) is %d\n\n", sizeof(int)  );
  
  for ( sub = 0; sub < 10; sub++ )
  {
      printf( "&array[%d] = %x\n", sub, 
             &array[sub]  );
  }
}
