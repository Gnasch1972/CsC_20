//-----------------------------------------------------------------------------
// Program: EX5_16.c Exponentiation
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program will prompt the user for two integer values and then output the
// integer power of those two.  The two numbers will be the base and the
// exponenet.  The base is an integer and the exponenet is a nonzero positive
// integer. 
//-----------------------------------------------------------------------------

#include<stdio.h>

int integerPower(int base, int exponent); // Function prototype

int main (void)
{
  // Variable declaration
  
  int base; // User entered integer value
  int exponent; // User entered positive nonzero

  // Promt user for data
  printf("Please enter values for the base and exponent: ");
  scanf("%d%d", &base, &exponent);

  // Output integer power
  printf("%d to the %d power = %d", base, exponent, integerPower(base, exponent));

  return 0;

}

//-----------------------------------------------------------------------------
// Function integerPower - calculates the integer power
// Input: base = integer 
//        exponent = positive nonzero integer
// Output: integer
//-----------------------------------------------------------------------------

int integerPower(int base, int exponent)
{
  int i; // Loop counter
  int prod = base; // product

  for (i=1; i < exponent; i++)
    prod *= base;

  return prod;
}
