//-----------------------------------------------------------------------------
// Program:  Ex 5.39 - Greatest Common Divisor
// Programmer:  Joseph Cunningham
// Class: CsC_20 - c
// Date:  2/20/19
//
// This program calculates the greatest common divisor of two positive integers
// input by the user
//-----------------------------------------------------------------------------
#include<stdio.h>

int gCD(int a, int b);

int main(void)
{
	// Declare variables

	int x, y;  // User input positive intgers
	int large, small;  // Which is bigger
	int answer; // Return value of function gCD - greatest common divisor

					// Prompt user for integers

	printf("Please input 2 positive integers: ");
	scanf("%d %d", &x, &y);

	// Place the 1st argument in large

	large = x;

	// Compare and assign

	if (y > large)
	{
		large = y;
		small = x;
	}

	else
		small = y;

	// Call function and get the answer

	answer = gCD(small, large);

	// Output answeer

	printf("The greatest common divisor of %d & %d is %d\n", x, y, answer);

	return 0;
}

//-----------------------------------------------------------------------------
// Function:  int gCD(int a, int b)
// Input:  two positive integers
// Output:  one int value which is the GCD
//-----------------------------------------------------------------------------
int gCD(int a, int b)
{
	if (a == 0)
		return b;

	else
        return gCD(b % a, a);
}
