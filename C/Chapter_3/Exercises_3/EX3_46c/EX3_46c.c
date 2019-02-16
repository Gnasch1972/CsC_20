//-----------------------------------------------------------------------------
// Program:  Ex3_46c - Series Expansion of e^x
// Programmer: Joseph Cunningham
// Date:  10/28/15
//
// This program estimates the value of e^x from the series expansion.  The user 
// is prompted for a number which will correlate to the number of expansions 
// for e^x.  It output the value of e for the number input by the user
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables
	int x;  // User input number for series expansion
	int i = 1;  // while loop control variable
	int j;  // for loop control variable
	int k; // for loop control variable
	int fact; // Calculated factorial
	int powerX = 1;  // Power of x
	float eSum = 1;  // Calculates series expansion for e

						  // Prompt user for n

	printf("Please input the number of terms for series: ");
	scanf("%d", &x);

	// Calculate the series expansion
	while (i <= x)
	{
		fact = 1;
		powerX = 1;

		// Calculate the factorial
		for (j = i; j >= 1; j--)
		{
			fact *= j;
		}

		// Calculate the x to power term

		for (k = 1; k <= i; k++)
		{
			powerX *= x;

			//printf("powerX = %d\n", powerX);
		}

		// Calculate series term

		eSum += (float)powerX / (float)fact;
		i++;

		//printf("eSum = %f\n", eSum);
	}

	// Output series expansion

	printf("For %d terms e^%d = %f\n", x, x, eSum);

	return 0;
}
