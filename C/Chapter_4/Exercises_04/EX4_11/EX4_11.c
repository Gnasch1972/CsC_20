//-----------------------------------------------------------------------------
// Program:  Ex 4.11 - Find the Smallest
// Programmer: Joseph Cunningham
// Date: 10/28/15
//
// This program reads in integer values, finds and outputs the smallest one. 
// The first value read is the number of values to be read and sorted.
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare Variables
	int totNum; // Total numbers to be read and compared
	int smallest;  // smallest integer
	int count = 1;  // while loop counter
	int number;  // User entered number

	// Prompt user for number of values to be read

	printf("Enter the number of values to be read: ");
	scanf("%d", &totNum);

	// Prompt user for first number
	printf("Enter first number: ");
	scanf("%d", &smallest);
	count++;

	// Read numbers and compare
	while (count <= totNum)
	{
		// Prompt user for next number
		printf("Enter next number: ");
		scanf("%d", &number);

		if (number < smallest)
		{
			smallest = number;
		}

		++count;
	}

	// Output the smallest number

	printf("The smallest number input was %d\n", smallest);

	return 0;
}