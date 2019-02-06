//-----------------------------------------------------------------------------
// Program: EX 3.24 - Find the Largest Number
// Programmer: Joseph Cunningham
// Date: 10/2/15
//
// This program will find the largest number in 10 integer input by a user
//-----------------------------------------------------------------------------
// Program:  Ex 3.24 - Find the Largest Number
// Programmer:  Joseph Cunningham
// Date:  10/27/15
//
// This program will find the largest of 10 user input numbers
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables

	int counter = 1;  // Loop control counter
	int number;  // The number input
	int largest = 0; // Largest integer

	while (counter <= 10)
	{

		printf("\nPlease enter an integer: ");
		scanf("%d", &number);

		if (number > largest)
			largest = number;

		++counter;

	}

	printf("\n\nThe largest number entered was %d\n", largest);

	return 0;
}
