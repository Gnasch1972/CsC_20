//-----------------------------------------------------------------------------
// Program: EX5_29.c - Greatest Common Divisor
// Programmer: Joseph Cunningham
// Class: CsC_20.c
// Date: 2/18/19
//
// This program takes two integers from the user and outputs the greatest common
// divisor of the two numbers.
//-----------------------------------------------------------------------------


#include<stdio.h>

int gCD(int a, int b); // Function prototype

int main(void)
{
    // Declare variables
    
    int num1, num2; // User input for GCD
    
    // Prompt user for input
    
    printf("Please input two integers: ");
    scanf("%d%d", &num1, &num2);

    // Get and display GCD
    
    printf("GCD[%d,%d] = %d\n", num1, num2, gCD(num1, num2));

    return 0;

}

//-----------------------------------------------------------------------------
// Function: gCD - finds the greatest common divisor of two integers
//
// a: one positive integer
// b: another positive integer
//
// Returns: greatest common divisor
// ----------------------------------------------------------------------------

int gCD(int a, int b)
{
    while(a != 0)
    {
       int  c = a;
        a = b % a;
        b = c;
    }

    return b;
}
