//-----------------------------------------------------------------------------
// Program:  SR03.c - math.h test
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/15/19
//
// This program test the fucntions in the math.h libray with the values in Table
// 5.2 to see if it works
// ----------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>

int main (void)
{
  printf("Test the math.h functions\n");
  printf("\n");

  // Sqrt (x)
  printf("sqrt(%.1f) is %.1f\n", 900.0, sqrt(900.0));
  printf("sqrt(%.1f) is %.1f\n", 30.0, sqrt(30.0));
  printf("\n");

  // Exp (x)
  printf("exp(%.1f) is %.6f\n", 1.0, exp(1.0));
  printf("exp(%.1f) is %.6f\n", 2.0, exp(2.0));
  printf("\n");

  // Log{x)
  printf("log(%.6f) is %.1f\n", 2.718282, log(2.718282));
  printf("log(%.6f) is %.1f\n", 7.389056, log(7.389056));
  printf("\n");

  // Log10(x)
  printf("Log10(%.1f) is %.1f\n", 1.0, log10(1.0));
  printf("Log10(%.1f) is %.1f\n", 10.0, log10(10.0));
  printf("Log10(%.1f) is %.1f\n", 100.0, log10(100.0));
  printf("\n");

  // fabs(x)
  printf("fabs(%.1f) is %.1f\n", 13.5, fabs(13.5));
  printf("fabs(%.1f) is %.1f\n", 0.0, fabs(0.0));
  printf("fabs(%.1f) is %.1f\n", -13.5, fabs(-13.5));
  printf("\n");

  // ceil(x)
  printf("ceil(%.1f) is %.1f\n", 9.2, ceil(9.2));
  printf("ceil(%.1f) is %.1f\n", -9.8, ceil(9.8));
  printf("\n");

  // floor(x)
  printf("floor(%.1f) is %.1f\n", 9.2, floor(9.2));
  printf("floor(%.1f) is %.1f\n", 9.2, floor(9.2));
  printf("\n");

  // pow(x,y)
  printf("power(%.1f, %.1f) is %.1f\n",2.0,7.0, pow(2,7));
  printf("power(%.1f, %.1f) is %.1f\n",9.0,.5, pow(9.0,0.5));
  printf("\n");

  // fmod(x, y)
  printf("fmod(%.3f, %.3f) is %.3f\n", 13.657, 2.333, fmod(13.657, 2.333));
  printf("\n");

  // sin(x)
  printf("sin(%.1f) is %.1f\n", 0.0, sin(0.0));
  printf("\n");

  // cos(x)
  printf("cos(%.1f) is %.1f\n", 0.0, cos(0.0));
  printf("\n");

  // tan(x)
  printf("tan(%.1f) is %.1f\n", 0.0, tan(0.0));
  
  return 0;
}
