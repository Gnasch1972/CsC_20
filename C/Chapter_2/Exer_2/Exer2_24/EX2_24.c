//*****************************************************************************
// Program EX2_24.c: Odd or Even
// Programmer: Joseph Cunningham
// Class: CsC_20 - C
// Date: 1/24/19
//
// This program prompts the user for an integer.  It determines if the integer
// is odd or even and prints a message stating that.
// ****************************************************************************

#include<stdio.h>

int main (void)
{
  // Declare variables
  int a;  // User input

  // Prompt user for integer
  
  printf("Please enter an integer: ");
  scanf("%d", &a);

  // Is it odd or even?
  
  if (a % 2== 0)
    printf("%d is even", a);

  if (a % 2 != 0)
    printf("%d is odd", a);

  return 0;
}
