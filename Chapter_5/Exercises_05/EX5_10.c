//-----------------------------------------------------------------------------
// Program:  Ex 5.10 - Rounding Numbers
// Programmer: Joseph Cunningham
// Date:  11/1/15
//
// This program round numbers to the nearest integers.  It will read numbers
// input from the user till the user opts out.  It will output the rounded
// number to screen.
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<math.h>

int main(void)
{
	// Variable declaration

	float number;  // Number input by the user
	float roundedNum; // Rounded number

	// Prompt user for number
	printf("Please enter a number to be rounded(-1 to exit): ");
	scanf("%f", &number);

	// While the end of entering has not been entered
	while ((int)number != -1)
	{
		// Round the number
		roundedNum = floor(number + .5);

		// Output the number

		printf("%f rounded to the nearest integer is %.0f\n", number, roundedNum);

		// Prompt user for another number

		printf("Please enter a number to be rounded(-1 to exit): ");
		scanf("%f", &number);
	}

	return 0;
}