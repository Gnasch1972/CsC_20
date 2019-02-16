//-----------------------------------------------------------------------------
// Program EX2_31.c Table of Squares and Cubes
// Programmer: Joseph Cunningham
// Class: CsC_20 - C
// Date: 1/31/19
//
// This program will output a table of squares and cubes for the first 10
// intgers.
//-----------------------------------------------------------------------------


#include<stdio.h>

int main (void)
{

  // Output table
  
  printf("Number      Square      Cube\n");
  printf("%d           %d           %d\n", 0, 0*0, 0*0*0);
  printf("%d           %d           %d\n", 1, 1*1, 1*1*1);
  printf("%d           %d           %d\n", 2, 2*2, 2*2*2);
  printf("%d           %d           %d\n", 3, 3*3, 3*3*3);
  printf("%d           %d          %d\n", 4, 4*4, 4*4*4);
  printf("%d           %d          %d\n", 5, 5*5, 5*5*5);
  printf("%d           %d          %d\n", 6, 6*6, 6*6*6);
  printf("%d           %d          %d\n", 7, 7*7, 7*7*7);
  printf("%d           %d          %d\n", 8, 8*8, 8*8*8);
  printf("%d           %d          %d\n", 9, 9*9, 9*9*9);
  printf("%d          %d         %d\n", 10, 10*10, 10*10*10);



  return 0;
}
