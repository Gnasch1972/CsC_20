//*****************************************************************************
// Program: EX2_19.c - Arithmetic, Largest and Smallest Value
// Author: Joseph Cunningham
// Class: CsC20 - C
// Date: 1/23/19
//
// This program prompts the user for 3 DIFFERENT integers.  It calculates and
// prints the sum, average and product of the integers.  It then determines the
// smallest and largest of the 3 values and outputs them.
//
// ****************************************************************************

#include<stdio.h>

int main (void)
{
  // Variable declaration
  int x, y, z;   // User input
  int smallest; // smalles of the 3 integers
  int largest; // Largest of the 3 intgers

  // Prompt user for integers
  
  printf("Please enter 3 DIFFERENT integers: \n");
  scanf("%d %d %d", &x, &y, &z);

  // Sum, Average & Product
  
  printf("Sum is %d\n", x + y + z);
  printf("Average is %d\n", (x + y + z) / 3);
  printf("Product is %d\n", x * y * z);

  // Find the smallest value
  
  smallest = x; // Assume x is the smallest

  if (y < smallest)
    smallest = y;

  if (z < smallest)
    smallest = z;

  printf("Smallest is %d\n", smallest);

  // Find largest
  
  largest = x; // Assume x is the largest

  if (y > largest)
    largest = y;

  if (z > largest)
    largest = z;

  printf("Largest is %d\n", largest);

  return 0;

}
