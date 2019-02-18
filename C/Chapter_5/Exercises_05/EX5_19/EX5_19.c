//-----------------------------------------------------------------------------
// Program:  EX5_19.c - Asterisks Sqare with Function
// Progammer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program will print a square of size side.  Side is an integer that the
// use inputs.
// ----------------------------------------------------------------------------

#include<stdio.h>

void printSquare(int side); // Function prototype

int main (void)
{
  int side; // User input, side of square

  // Prompt user for side
  
  printf("Please enter a square size: ");
  scanf("%d", &side);

  // Print square
 
  printf("\n");
  printSquare(side);

  return 0;
}

//-----------------------------------------------------------------------------
// Function: printSquare(side) - prints a square with size size wth asterisks
// Input: int side - value of the size of a side of a square
// Output: none
//-----------------------------------------------------------------------------

void printSquare(int side)
{
  // Declare variables
  
  int  i, j; // loop counters

  for(i = 1; i <= side; i++)
  {
    for(j=1; j <= side; j++)
    {
      printf("*");
    }

    printf("\n");
  }
}
