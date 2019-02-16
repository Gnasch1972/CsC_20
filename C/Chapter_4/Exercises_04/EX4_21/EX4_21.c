//-----------------------------------------------------------------------------
// Program: Ex 4.21 - Rewrite of Fig 4.2
// Programmer: Joseph Cunningham
// Date: 10/8/15
//
// Counter-controlled repetition with the for statement.  Re-write to put the 
// counter initalization in declaration

#include<stdio.h>

// Function main begins program execution

int main(void)
{
	int counter = 1;  // Define counter

					  // Intialization, repetition condition, and increment are all 
					  // included in the for statement.

	for (; counter <= 10; counter++)
	{
		printf("%d\n", counter);
	}

	return 0;
}
