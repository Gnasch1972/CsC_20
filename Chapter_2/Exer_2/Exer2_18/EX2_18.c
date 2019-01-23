//*****************************************************************************
// Program:  EX2_16 Comparing Integers
// Author:  Joseph Cunningham
// Class: Csc20 - C
// Date: 1/23/19
//
// This program prompts the user for two integers.  If one of the integrs is
// larger than the other it will display: largerNumber "is larger".  If the
// integers are equal it will display: "These numbers are equal".
// ****************************************************************************

#include<stdio.h>

int main(void)
{
  // Variable declaration
  
  int x, y; // user input 

  // Prompt user for 2 integers
  
  printf("Please input 2 integers: \n");
  scanf("%d%d", &x, &y);

  // Comparison
  if (x > y)
    printf("%d is larger\n", x);

  if (y >x)
    printf("%d is larger\n", y);

  if (x == y)
    printf("These numbers are equal\n");

  return 0;
}
