//-----------------------------------------------------------------------------
// Program:  Ex 5-16 - Exponentiation
// Programmer: Joseph Cunningham
// Date:11/2/15
//
// This program calculated the integer power of a number.  The user inputs 
// a base and an exponent.  The program outputs the answer.
//-----------------------------------------------------------------------------
#include<stdio.h>
 
// Function prototype

int integerPower(int base, int exponent);

int main(void)
{
	// Variable declaration

	int base;  // Integer to be powered
	int exp;  // Integer exponenet
	int power; // Function return value which is the base^exp
	
	// Prompt use for data
	printf("Please enter a base and exponent pair: ");
	scanf("%d %d", &base, &exp);

	// Calcualte the power

	power = integerPower(base, exp);

	// Output answer

	printf("%d^%d = %d\n", base, exp, power);

	return 0;
}

//-----------------------------------------------------------------------------
// Function int integerPower(int base, int exponent)
// Input:  integer value of base
//			  integer value of exponent
// Output:  intger value of base^exp
//-----------------------------------------------------------------------------
int integerPower(int base, int exponent)
{
	// Declare variables

	int i = 0; // for loop control variable
	int prod = 1;  // product of base * base

	//  If the exp is = 1

	if (exponent == 1)
		return base;
	else
	{
		for (i = 1; i <= exponent; i++)
		{
			prod *= base;
		}

		return prod;
	}
}