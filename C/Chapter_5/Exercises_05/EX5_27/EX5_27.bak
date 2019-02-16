//-----------------------------------------------------------------------------
// Program: Ex 5.27 - Prime Numbers
// Programmer:  Joseph Cunningham
// Date: 11/2/15
//
// This program finds all the prime number between 1 & 1000
//-----------------------------------------------------------------------------
#include <stdio.h>

int isPrime(int number);

int main(void)
{
	// Declare variables

	int number; // Number to be tested
	int result; // Return value from function
	int i = 1;  // For loop control variable

	printf("PRIME NUMBERS\n");

	for (i = 1; i <= 10000; i++)
	{
		result = isPrime(i);

		if(result == 1)
			printf("%d\n", i);
	}

	return 0;
}


//-----------------------------------------------------------------------------
// Function:  int isPrime(int number)
// Input: int value number to be tested for primeness
// Output:  int value - 1 = prime 0 not prime
//-----------------------------------------------------------------------------
int isPrime(int number)
{
	// Declare variable
	int i;

	//printf("Number = %d\n", number);
	// If the number is less that or equal 2 it is prime
	if (number <= 2)
		return 1;

	// If greater than 2 then test each number 
	
	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}