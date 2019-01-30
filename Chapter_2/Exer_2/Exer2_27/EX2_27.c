//-----------------------------------------------------------------------------
// Program: EX2_27.c Checkerboard Pattern of Astrisks
// Programmer: Joseph Cunningham
// Class: CsC_20: C
// Date: 1/30/19
//
// This program prints a checkerboard of asteriks with 8 printf statement and
// then with as few as possible.
//
// ----------------------------------------------------------------------------

#include<stdio.h>

int main (void)
{
  // Print checkerboard with 8 printf statements
  
  printf("* * * * * * * *\n");
  printf(" * * * * * * * *\n");
  printf("* * * * * * * *\n");
  printf(" * * * * * * * *\n");
  printf("* * * * * * * *\n");
  printf(" * * * * * * * *\n");
  printf("* * * * * * * *\n");
  printf(" * * * * * * * *\n");

  // Print checkerboard with 4 printf statements
  
  printf("\n\n") ;
  printf("* * * * * * * *\n * * * * * * *\n");
  printf("* * * * * * * *\n * * * * * * *\n"); 
  printf("* * * * * * * *\n * * * * * * *\n"); 
  printf("* * * * * * * *\n * * * * * * *\n");

  return 0;


}


