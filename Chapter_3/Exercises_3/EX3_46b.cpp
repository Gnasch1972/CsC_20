//-----------------------------------------------------------------------------
// Program:  Ex3_46b - Series Expansion of e
// Programmer: Joseph Cunningham
// Date:  10/28/15
//
// This program estimates the value of e from the series expansion.  The user 
// is prompted for a number which will correlate to the number of expansions 
// for e.  It output the value of e for the number input by the user
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables
	int n;  // User input number for series expansion
	int i = 1;  // while loop control variable
	int j;  // for loop control variable
	int fact; // Calculated factorial
	float eSum = 1;  // Calculates series expansion for e

	// Prompt user for n

	printf("Please input the number of terms for series: ");
	scanf("%d", &n);

	// Calculate the series expansion
	while (i <= n)
	{
		fact = 1;

		// Calculate the factorial
		for (j = i; j >= 1; j--)
		{
			fact *= j;
		}

		// Calculate series term

		eSum += 1 / (float)fact;
		i++;
	}

	// Output series expansion

	printf("For %d terms e = %f\n", n, eSum);

	return 0;
}
