//-----------------------------------------------------------------------------
// Program:  Ex 4.10 - Average a Sequence of Integers
// Programmer:  Joseph Cunningham
// Date: 10/28/15
//
// This program read a series of integers and outputs the average of them.
// It reads values until the sentinel value 9999 is read.
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables
	int num;  // Number input by user
	int sum = 0;  // Sum of the numbers
	int count = 0;  // Number of values read
	int avg; // Average of the values

	// Prompt user for a number
	printf("Enter a number (9999 to end): ");
	scanf("%d", &num);

	// Read and sum values until sentinel is read
	while (num != 9999)
	{
		// Sum the number
		sum += num;

		// Increment the sum counter
		count++;

		// Prompt user for a number
		printf("\nEnter a number (9999 to end): ");
		scanf("%d", &num);
	}

	if (count == 0)
	{
		printf("No data was entered\n");
		return 0;
	}

	// Calculate the average

	avg = sum / count;

	// Output average

	printf("The average is %d\n", avg);

	return 0;
}