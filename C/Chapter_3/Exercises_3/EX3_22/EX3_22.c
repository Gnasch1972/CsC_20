//-----------------------------------------------------------------------------
// Program: Ex 3.22 - Predecrementing vs Postdecrementing
// Programmer:  Joseph Cunningham
// Class: CsC_20 - C
// Date: 10/26/15
//
// This program demonstrates the difference between the predecrementing 
// and postdecrementing
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variable

	int i = 10, j = 10;

	while (i > 1)
	{
		printf("Predecrement\n");
		printf("i = %d, ", --i);
		{

		};
	}

	printf("\n");

	while(j > 1)
	{
		printf("Postdecrement\n");
		printf("j = %d, ", j--);
	}

	printf("\n");
	return 0;
}
