//-----------------------------------------------------------------------------
// Program: EX5_11.c - Rounding Numbers
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program will prompt the user for several floating point values.  It will
// then round each of those values to the nearest integer, teth, hundreth, and
// thousandth. It will output the original value and the rounded ones.
//-----------------------------------------------------------------------------


#include<stdio.h>
#include<math.h>

// Function prototypes

int roundToInteger(float x);
float roundToTenths(float x);
float roundToHundreths(float x);
float roundToThousandths(float x);

int main(void)
{
  // Declare variables
  //
  int i; // Loop counter
  float number; // User input format X.XXXX
 
  // Output values 
  for(i = 1; i <=5; i++)
  {
    printf("Please input a floating point value (X.XXXX): ");
    scanf("%f", &number);

    // Output values
    printf("%.4f as an integer = %d\n", number, roundToInteger(number));
    printf("%.4f rounded to the tenths = %.1f\n", number, roundToTenths(number));
    printf("%.4f rounded to the hundreths = %.2f\n", number, roundToHundreths(number));
    printf("%.4f rounded to the thousandths = %.3f\n", number, roundToThousandths(number));
    printf("\n");
  }

  return 0;
}

//-----------------------------------------------------------------------------
// Function - roundToInteger
// Input: float number
// Output: integer
//-----------------------------------------------------------------------------

int roundToInteger( float number)
{
  return floor(number + 0.5);
}

//-----------------------------------------------------------------------------
// Function: roundToTenths
// Input: float
// Output: float X.X
//-----------------------------------------------------------------------------

float roundToTenths(float number)
{
  return floor(number * 10 + 0.5) / 10;
}

//-----------------------------------------------------------------------------
// Function: roundToHundreths
// Input: float
// Output: float X.XX
//-----------------------------------------------------------------------------

float roundToHundreths(float number)
{
  return floor(number * 100 + 0.5) / 100;
}

//-----------------------------------------------------------------------------
// Function: roundToThousandths
// Input: float
// Output: float X.XXX
//-----------------------------------------------------------------------------

float roundToThousandths(float number)
{
  return floor(number * 1000 + 0.5) / 1000;
}
