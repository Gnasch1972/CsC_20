//*****************************************************************************
// Program:  Ex2_17: Printing values with printf
// Author:  Joseph Cunningham
// Class:  Csc20 - C
// Date:  1/23/19
//
// This program will print the numbers 1 - 4 on the screen using the following
// methods:
//
//        1).  use one printf statement and no conversion specifiers
//        2).  use one printf statement and 4 conversion specifiers
//        3).  use 4 printf statements
//
//*****************************************************************************


#include<stdio.h>

int main(void)
{
  printf("One printf statement and no conversion specifiers\n");
  printf("1 2 3 4\n");

  printf("One printf statement and 4 conversion specifiers\n");
  printf("%d %d %d %d \n", 1, 2, 3, 4);

  printf("four printf statements\n");
  printf("1 ");
  printf("2 ");
  printf("3 ");
  printf("4\n");

  return 0;
}
