//*****************************************************************************
// Program: EX2_20.c - Diameter, Circumference and Area of a Circle
// Author: Joseph Cunningham
// Class: CsC_20 - C
// Date: 1/23/19
//
// This program will prompt the user for a radius (integer). It will then
// calculate and print the diameter, circumference and area of that circle.
//
// ****************************************************************************

#include<stdio.h>

int main (void)
{
  int radius; // User input

  // Prompt user for radius
  printf("Please input the radius: ");
  scanf("%d", &radius);

  // Calculate and print
  
  printf("Diameter = %d\n", 2 * radius);
  printf("Circumference = %f\n", 2 * 3.14159 * radius);
  printf("Area = %f\n", 3.14159 * radius * radius);

  return 0;
}
