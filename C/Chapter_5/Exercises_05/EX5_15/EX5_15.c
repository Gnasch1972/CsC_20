//-----------------------------------------------------------------------------
// Program: EX5_15.c - Hypotenuse Calculations
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program will prompt the use for 2 sides of a right triangle.  It will
// calculate and outpt the hypotenuse of the triangle.
//-----------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>

double hypotenuse (double x, double y); // Function prototype

int main (void)
{
  double side1, side2; // User input - sides of right triangle

  // Prompt user for right triangle sides
  
  printf("Enter the two sides of a right triangle: ");
  scanf("%lf%lf", &side1, &side2);

  // Output the hypotenuse
  
  printf("The hypotenuse = %.3lf\n", hypotenuse(side1, side2));

  return 0;
}

//-----------------------------------------------------------------------------
// Function hypotenuse - finds the hypotenuse of a right triangle give two sides
// Input - double, double - two sides of a right triangle
// Output - double - hypotenues
//-----------------------------------------------------------------------------

double hypotenuse(double side1, double side2)
{
  return sqrt(pow(side1, 2) + pow(side2, 2));
}
