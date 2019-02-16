//-----------------------------------------------------------------------------
// Program:  Ex 5.29 - Greatest Common Divisor
// Programmer:  Joseph Cunningham
// Date:  10/22/15
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
	int answer; // Return value of function gCD - greatest common divisor

					// Prompt user for integers

	printf("Please input 2 positive integers: ");
	scanf("%d %d", &x, &y);

	// Call function and get the answer

	answer = gCD(x, y);

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
	// Declare variables

	int large;  // Largest of the two values
	int small;  // Smaller of the two values
	int remain;  // Remainder

					 // Place the 1st argument in large

	large = a;

	// Compare and assign

	if (b > large)
	{
		large = b;
		small = a;
	}

	else
		small = b;

	// Loop until remainder is equal to 0

	do
	{
		remain = large % small;

		if (remain != 0)
		{
			large = small;
			small = remain;
		}
	} while (remain != 0);

	return small;
}