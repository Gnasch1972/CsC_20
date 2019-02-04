//-----------------------------------------------------------------------------
// Program: EX3.34 - Hallow Square of Astrisks
// Programmer:  Joseph Cunningham
// Date:  10/5/15
//
// This program will prompt the user for a side of a square.  It will then 
// print out a hallow square of astrisks that size.
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
		printf("*");
	}

	printf("\n");

	for (i = 1; i < side - 1; i++)
	{
		printf("*");

		for (j = 1; j < side - 1; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}

	for (i = 1; i <= side; i++)
	{
		printf("*");
	}

	printf("\n");
}