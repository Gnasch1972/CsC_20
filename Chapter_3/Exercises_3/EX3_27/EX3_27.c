//-----------------------------------------------------------------------------
// Program: EX 3.27 - Find the Two Largest Numbers
// Programmer: Joseph Cunningham
// Date: 10/2/15
//
// This program will find the two largest number in 10 integer input by a user
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
	// Declare variables

	int counter = 1;  // Loop control counter
	int number;  // The number input
	int largest = 0; // Largest integer
	int large = 0; // Second largest integer

	printf("\nPlease enter a positive integer: ");
	scanf("%d", &number);

	largest = number;

	while (counter < 10)
	{

		printf("\nPlease enter a positive integer: ");
		scanf("%d", &number);

		if (number > largest)
		{
			large = largest;
			largest = number;
		}

		else if (number > large)
			large = number;

		++counter;

	}

	printf("\n\nThe largest number entered was %d\n", largest);
	printf("The second largest number entered was %d\n", large);

	return 0;
}