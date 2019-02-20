//-----------------------------------------------------------------------------
// Program:  Ex 5.35: Fibonacci 
// Programmer:  Joseph Cunningham
// Class: CsC_20 -c
// Date: 2?19/19
//
// This program calculates the fibonacci series nonrecursively
//-----------------------------------------------------------------------------
#include<stdio.h>

double fibo(int n);

int main(void)
{
	int n = 0; // The number input by the user
	double value; // Value of the series for the number input
    char str[]  = 'inf';

	while (n >= 0)
	{

		// Call fibo function

		value = fibo(n);

		// Output the value

		printf("For %d the value of the fibonacci series = %.0f\n", n, value);
	
		if (value == str)
			break;
		n++;

	}

	return 0;
}

//-----------------------------------------------------------------------------
// Function int fibo(int n)
// Input: an integer value for the number of values in the series
// Output: int value -> value of the series @ n
//-----------------------------------------------------------------------------
double fibo(int n)
{
	// Declare variables

	int i; // For loop control variable
	double one = 0; // First term
	double two = 1; // Second term
	double sum = 0; // placeholder

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
	{
		for (i = 2; i <= n; i++)
		{
			sum = one + two;
			one = two;
			two = sum;
		}
	}

	return sum;
}
