//-----------------------------------------------------------------------------
// Program: EX 4.16 - Triangle Priniting Program
// Programmer:  Joseph Cunningham
// Date: 10/8/15
//
// This program will print 4 triangles in a row.  
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	int i; // For loop counter
	int j; // For loop counter
	int k; // For loop counter


	//  First triangle

	// Print rowa
	for (i = 1; i <= 10; i++)
	{
		// Print astrisks

		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");

	// Second Triangle

	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");

	// Third Trinagle
	for (int i = 1; i <= 10; i++)
	{

		if (i != 1)
		{
			for (j = 1; j < i; j++)
			{
				printf(" ");
			}
		}
		for (int k = 10; k >= i; k--)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");

	// Fourth Triangle

	for (int i = 1; i <= 10; i++)
	{

		if (i != 10)
		{
			for (j = 10; j > i; j--)
			{
				printf(" ");
			}
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}