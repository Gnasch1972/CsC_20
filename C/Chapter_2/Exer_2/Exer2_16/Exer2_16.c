// -----------------------------------------------------------------------------
// Program: Exer2_16.c - Simple Math Solver
// Programmer:  Joseph Cunningham
// Class:  CsC 20
// Date: 1/17/19
//
// This program will prompt the user of 2 integers.  It will then output the 
// sum, product, difference, quotient and remainder of the two numbers.
// ----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
  int num1; // First user entered integer
  int num2; // Second user entered integer

  int sum; // Sum of 2 integers
  int prod; // Product of 2 integers
  int diff; // Difference of 2 integers
  int quot; // Quotient of 2 integers
  int remain; // Remainder of 2 integers

  // Prompt the user for 2 integers
  printf("Please enter 2 integers: ");

  scanf ("%d%d", &num1, &num2);

  // Calculate the values
  
  sum = num1 + num2;
  prod = num1 * num2;
  diff = num1 - num2;
  quot = num1 / num2;
  remain = num1 % num2;

  // Output the values
  
  printf("%d + %d = %d\n", num1, num2, sum);
  printf("%d * %d = %d\n", num1, num2, prod);
  printf("%d - %d = %d\n", num1, num2, diff);
  printf("%d / %d = %d\n", num1, num2, quot);
  printf("%d mod %d = %d\n", num1, num2, remain);

  return 0;
}
