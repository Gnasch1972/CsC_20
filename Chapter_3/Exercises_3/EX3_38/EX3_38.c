//-----------------------------------------------------------------------------
// Program: EX 3.38 - 100 Astrisks
// Programmer: Joseph Cunningham
// Date:10/5/15
//
// This program will print 100 astricks 10 at a time
//----------------------------------------------------------------------------=

#include<stdio.h>

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		printf("*");

		if (i % 10 == 0)
		{
			printf("\n");
		}

		i++;
	}

	return 0;
}