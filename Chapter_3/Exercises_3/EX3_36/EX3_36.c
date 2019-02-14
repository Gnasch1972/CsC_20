//-----------------------------------------------------------------------------
// Program: 3.36 - Print the Decimal Equivalent of a Binary Number
// Programmer:  Joseph Cunningham
// Date:  10/5/15
//
// This program will read a binary digit in and convert it to a decimal.
// It will then output that decimal.
//-----------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>

int main(void)
{
	int number; // Number input by the user
	int temp = 0;  // To hold number to count
	int count = 0; // Count of numbers
	int i;  // Loop variable
	int sum = 0; // Sum of the binary digit
	int bit; // Individual binary digits

	// Prompt the user for the binary digit

	printf("Please input a binary digit: ");
	scanf("%d", &number);

	// Store binary digit for processing

	temp = number;

	// Count the number of digit

	while (temp > 0)
	{
		temp = temp / 10;
		count++;
	}

	// Convert binary to decimal

	temp = number;

	for (i = 0; i < count; i++)
	{
		bit = temp % 10;
		sum += bit * (int)pow(2.0,(double)i);
		temp = temp / 10;
	}

	// Output the decimal equivalent

	printf("\nThe binary digit %d is %d in decimal\n", number, sum);

	return 0;
}