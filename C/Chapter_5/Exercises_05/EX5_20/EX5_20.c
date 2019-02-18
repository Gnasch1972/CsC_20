//-----------------------------------------------------------------------------
// Program:  EX5_20.c - Displaying a Square of Any Character
// Progammer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program will print a square of size side and of specified character.
// ----------------------------------------------------------------------------

#include<stdio.h>

void printSquare(int side, char fillCharacter); // Function prototype

int main (void)
{
  int side; // User input, side of square
  char fillCharacter; // User input, character 

  // Prompt user for side
  
  printf("Please enter a square size and character: ");
  scanf("%d %c", &side, &fillCharacter );

  // Print square
 
  printf("\n");
  printSquare(side,fillCharacter);

  return 0;
}

//-----------------------------------------------------------------------------
// Function: printSquare(side) - prints a square with size size with
// fillCharacter
// Input: int side - value of the size of a side of a square
// Output: none
//-----------------------------------------------------------------------------

void printSquare(int side, char fillCharacter)
{
  // Declare variables
  
  int  i, j; // loop counters

  for(i = 1; i <= side; i++)
  {
    for(j=1; j <= side; j++)
    {
      printf("%c", fillCharacter);
    }

    printf("\n");
  }
}
