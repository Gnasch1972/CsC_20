//-----------------------------------------------------------------------------
// Program EX5_17.c - Multiples
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program will prompt the user for 2 integers.  It will output if the
// second is a multiple of the first.
// ----------------------------------------------------------------------------

#include<stdio.h>

int multiples(int x, int y);  // Function prototype

int main (void)
{
  // Variable declaration
  
  int x, y; // User entered integers where x < y

  // Prompt user for data
  
  printf("Please enter two intgers (first < second): ");
  scanf("%d%d", &x, &y);

  // Output
  
  if (multiples(x,y) == 1)
    printf("%d is a multiple of %d", y, x);

  else
    printf("%d is not a multiple of %d",x, y);

  return 0;

}

//-----------------------------------------------------------------------------
// Function: multiples (x,y) - determines if y is a multiple of x
// Input: int x, int y where x < y
// Output: 1 = true - is a multiple
//         0 = false - not a multiple
//-----------------------------------------------------------------------------

int multiples(int x, int y)
{
  if (y % x == 0)
    return 1;
  else
    return 0;
}
