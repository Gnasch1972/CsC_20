//*****************************************************************************
// Program EX2_23.c:  Largest and Smallest Integers
// Programmer: Joseph Cunningham
// Class: CsC_20 - C
// Date: 1/24/19
//
// This program will prompt the user for 5 integers.  It will then output the
// largest and smallest integer.
// ****************************************************************************


#include<stdio.h>

int main (void)
{
  int a, b, c, d, e;  // User input
  int largest, smallest; // Largest and smallest integer

  // Prompt user for input
  printf("Please enter 5 integers: ");
  scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
  
  
  // Find the largest integer

  largest = a;  // Assume a is the largest

  if (b > largest)
    largest = b;

  if (c > largest)
    largest = c;

  if (d > largest)
    largest = d;

  if (e > largest)
    largest = e;

  // Find smallest integer
  
  smallest = a;   // Assume a is the smallest

  if (b < smallest)
    smallest = b;

  if (c < smallest)
    smallest = c;

  if (d < smallest)
    smallest = d;

  if (e < smallest)
    smallest = e;

  // Output results
  
  printf("Largest = %d\n", largest);
  printf("Smallest = %d\n", smallest);

  return 0;
}
