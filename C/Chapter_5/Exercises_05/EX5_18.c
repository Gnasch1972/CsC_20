//-----------------------------------------------------------------------------
// Program:  Ex 5.18 - Even or Odd
// Programmer: Joseph Cunningham
// Date: 11/2/15
//
// This program prompts the user for a series of integers.  It then tells the
// user if it is even.
//-----------------------------------------------------------------------------
#include<stdio.h>

int even(int x);

int main(void)
{
	// Declare variables

	int i = 1;  // while loop control
	int number; // User input number
	int result; // Even or odd?

	// Prompt user for number

	printf("Please enter a number(-1 to exit): ");
	scanf("%d", &number);

	while (number != -1)
	{
		result = even(number);

		if (result == 1)
			printf("%d is an even number\n", number);

		printf("Please enter a number(-1 to exit): ");
		scanf("%d", &number);
	}

	return 0;
}

//-----------------------------------------------------------------------------
// Function int even(int x)
// Input:  int value to be investigated
// Output:  int value 1 if even 0 if odd
//-----------------------------------------------------------------------------
int even(int x)
{
	if (x % 2 ==  0)
		return 1;
	else
		return 0;
}