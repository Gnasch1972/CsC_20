//-----------------------------------------------------------------------------
// Program: EX5_8.c - math.h tests
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date:  2/15/19
//
// This program outputs what the math.h fucntions
//-----------------------------------------------------------------------------


#include<stdio.h>
#include<math.h>

int main (void)
{
  // Declare variables and initialize
  
  float  num1 = 7.5;
  float  num2 = 0.0;
  float  num3 = -6.4;
  int num5 = -8;
  float num6 = -5.5;

  // Output values
  
  printf("fabs(%.1f) = %.1f\n\n", num1, fabs(num1));
  printf("floor(%.1f) = %.1f\n\n", num1, floor(num1));
  printf("fabs(%.1f) = %.1f\n\n", num2, fabs(num2));
  printf("ceil(%.1f) = %.1f\n\n", num2, ceil(num2));
  printf("fabs(%.1f) = %.1f\n\n", num3, fabs(num3));
  printf("ceil(%.1f) = %.1f\n\n", num3, ceil(num3));
  printf("ceil(-fabs(%d + floor(%.1f))) = %.1f\n", num5, num6, ceil(-fabs(num5 + floor(num6))));

  return 0;
}
