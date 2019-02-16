//-----------------------------------------------------------------------------
// Program: EX2_30.c Separating Digits in an Integer
// Programmer: Joseph Cunningham
// Class: CsC_20 - C
// Date: 1/30/19
//
// This program reads in a 5 digit integer.  It outputs the integer separated
// into its individual numbers separated by 3 spaces.
//
// Example:
//
// Input: 412139
// Output: 4   1   2   3   9
// ----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
  // Declare Variables
  
  int number;  // User input - 5 digit integer

  // Prompt user for integer
  
  printf("Please enter a five digit integer: ");
  scanf("%d", &number);

  // Output numbers
  printf("%d   ", number / 10000);
  number = number % 10000;

  printf("%d   ", number / 1000);
  number = number % 1000;

  printf("%d   ", number / 100);
  number = number % 100;

  printf("%d   ", number / 10);
  printf("%d\n",  number % 10);

  return 0;


}
