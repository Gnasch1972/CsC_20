//-----------------------------------------------------------------------------
// Program: EX3_30- What does it print
// Programmer: Joseph Cunningham
// Class: Csc_20 - c
// Date: 2/11/19
//
// Program Output - Guess
//
// >>>>>>>>>>
// <<<<<<<<<<
// >>>>>>>>>>
// <<<<<<<<<<
// >>>>>>>>>>
// <<<<<<<<<<
// >>>>>>>>>>
// <<<<<<<<<<
// >>>>>>>>>>
// <<<<<<<<<<
// ----------------------------------------------------------------------------

#include<stdio.h>

int main (void)
{
  int row = 10; // Intialize row
  int column; // define column

  while(row >= 1)
  {
    column = 1;
  
    while(column <=10)
    {
      printf("%s", row % 2 ? "<" : ">");
      column++;
    }

    row--;
    printf("\n");
  }

  return 0;
}
