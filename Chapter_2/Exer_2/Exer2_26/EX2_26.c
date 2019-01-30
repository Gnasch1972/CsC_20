//-----------------------------------------------------------------------------
// Program: EX2_26.c Multiples
// Programmer: Joseph Cunningham
// Class- CsC20 - C
// Date: 1/30/19
//
// This program will prompt the user for 2 integers.  It tests to see if the
// first integer is a multiple of the second.  It prints the resluts.
//
// ----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

  // Variable declaration
  
  int int1, int2;  // User input

  // Prompt user for data
  
  printf("Please input 2 integers: ");
  scanf("%d%d", &int1, &int2);

  // Test and output results
  
  if(int1 % int2 == 0)
    printf("%d is a multiple of %d\n", int1, int2);

  if(int1 % int2 != 0)
    printf("%d is not a multiple of %d\n", int1, int2);

  return 0;
}
