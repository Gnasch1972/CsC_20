//-----------------------------------------------------------------------------
// Program: EX5_28.c - Reverse Digits
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/18/19
//
// This program takes a integer from 1 - 9999 and reverses it.  If it ends in
// zero the zero is dropped from the reverse digit
// ----------------------------------------------------------------------------

#include<stdio.h>

int reverse(int number); // Function prototype

int main (void)
{
    int number; // User entered value

    // Prompt user for intger
    printf("Please ented an integer(1-9999): ");
    scanf("%d", &number);
    
    // Reverse it and display it
    printf("%d reversed is %d\n", number, reverse(number));

    return 0;
}

//-----------------------------------------------------------------------------
// Function: reverse - reverses a digit in the range 1 - 9999
//
// number: the integer to be reversed
//
// Returns: the reversed digit
// ----------------------------------------------------------------------------
int reverse (int number)
{
    int multiplier = 1;
    int sum = 0;
    int divisor =  1000;

    while(number != 0)
    {
        sum += (number/divisor) * multiplier;
        number %= divisor;
        multiplier *= 10;
        divisor /= 10;
    }

    return sum;
}
