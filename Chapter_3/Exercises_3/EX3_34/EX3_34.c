//-----------------------------------------------------------------------------
// Program:  EX3_34.c - Hollow Square of Astrisks
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date:  2/13/19
//
// This program prints a hollow square make of astrisks given a side input by
// the user.  Size must be between 1-20.
//-----------------------------------------------------------------------------

#include<stdio.h> 

int main (void)
{
  // Initialize variables
  
  int size;  // User input - Size of square
  int row; // square row counter
  int column;  // square column counter

  // Prompt user for square size - integer from 1-20
  
  printf("Enter a square side size (1-20):");
  scanf("%d", &size);

  // Print out hollow square
  
  row = size;  // intialize row counter

  while (row >= 1)
  {
    // If first or last row
    if (row == size || row == 1)
    {
      column = size;

      while(column >= 1)
      {
        printf("*");
        column--;
      }
    }

    else
    {   
      column = size;

      while(column >= 1)
      {
        if (column == size || column == 1)
        {
          printf("*");
          column--;
        }
        else
        {
          printf(" ");
          column--;
        }
      }
    }
    
    printf("\n");
    row--;
  }
  
  return 0;
}
