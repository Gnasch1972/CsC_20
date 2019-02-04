//-----------------------------------------------------------------------------
// Program:  EX 3.26 - Tabular Output
// Programmer: Joseph Cunningham
// Date: 10/2/15
//
// This program uses loops to produce a table of values.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	int A = 3; // Loop Counter

	printf("A\tA+2\tA+4\tA+6\n");

	while (A <= 15)
	{
		printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);

		A = A + 3;
	}

	return 0;
}