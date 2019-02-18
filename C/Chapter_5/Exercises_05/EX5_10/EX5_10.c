//-----------------------------------------------------------------------------
// Program: EX5_10.c - Rounding numbers
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/17
//
// This program will read several floating point values input by the user and
// output that floating point number rounded to the nearest integer.
// ----------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>

int main (void)
{
  int i; // Loop counter
  float number; // Floating point number input by user
  int y;  // number rounded to the nearest integer

  for(i = 1; i <= 5; i++)
  {
    printf ("Enter a floating-point value: ");
    scanf("%f", &number);

    y = floor(number + 0.5);

    printf("%.1f = %d\n", number, y);
  }
  
  return 0;
}
