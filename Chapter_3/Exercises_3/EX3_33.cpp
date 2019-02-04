//-----------------------------------------------------------------------------
// Program: EX3.33 - Square of Astrisks
// Programmer:  Joseph Cunningham
// Date:  10/5/15
//
// This program will prompt the user for a side of a square.  It will then 
// print out a square of astrisks that size.
//-----------------------------------------------------------------------------

#include<stdio.h>

int  main(void)
{
	// Variable Declaration
	int side;  // User input side size
	int i;  // Outer loop variable
	int j;  // Inner loop varibae

	// Prompt user for side

	printf("Please enter a side of a square: ");
	scanf("%d", &side);

	// Print square

	for (i = 1; i <= side; i++)
	{
		for (j = 1; j <= side; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}