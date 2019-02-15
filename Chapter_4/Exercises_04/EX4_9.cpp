//-----------------------------------------------------------------------------
// Program: Ex. 4.9 - Sum a Sequence of Integers
// Programmer:  Joseph Cunningham
// Date:  10/28/15
//
// This program sums a series of integer that a user inputs.  The first number
// is the number of values to sum.  
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variable
	int totNum;  // Total values to be sum
	int counter = 1;  // while loop counter
	int sum = 0;  // Sum of the integers
	int number;  // Number to be summed

	// Prompt user for data

	printf("Please enter the number of integers to be summed: ");
	scanf("%d", &totNum);

	while (counter <= totNum)
	{
		// Prompt user for number
		printf("Please enter number: ");
		scanf("%d", &number);

		// Sum the number
		sum += number;

		// Increment counter
		++counter;
	}

	// Output sum
	printf("Sum = %d\n", sum);

	return 0;
}