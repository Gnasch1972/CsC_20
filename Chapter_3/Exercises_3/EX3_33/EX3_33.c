//-----------------------------------------------------------------------------
// Program: EX3_33.c - Square of Astricks
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/11/19
//
// This program prompts the uset to input the size of the side of a square.  The
// program outputs a sqaure of that size made of astricks.
// ----------------------------------------------------------------------------


#include<stdio.h>

int main(void)
{
  int size; // User entered data integer (1-20)
  int row; // number of rows
  int column; // number of columns

  // Prompt user for data
  
  printf("Please enter a side size: ");
  scanf("%d", &size);

  // Print the rectangle
  
  row = size;
  while(row >= 1)
  {
    column = size;
    while(column >= 1)
    {
      printf("*");
      column--;
    }
    printf("\n");
    row--;
  }

  return 0;
}
