//-----------------------------------------------------------------------------
// Program: 3.25 - Tabular Output
// Programmer:  Joseph Cunningham
// Date: 10/2/15
//
// Prints a table of N, 10*N, 100*N and 1000*N.  For N = 1-10
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	int N = 1; // Loop counter

	printf("N\t10*N\t100*N\t1000*N\n");

	while (N <= 10)
	{
		
		printf("%d\t%d\t%d\t%d\n", N, 10 * N, 100 * N, 1000 * N);

		++N;
	}

	return 0;
}