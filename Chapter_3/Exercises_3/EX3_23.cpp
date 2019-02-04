//-----------------------------------------------------------------------------
// Program: 3.23 - Printing Numbers from a Loop
// Programmer:  Joseph Cunningham
// Date: 10/2/15
//
// This program will print the numbers 1-10 on one line with 3 spaces in
// between.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	// Variable declaration

	int count = 1;  // Counter to controll loop

	while (count <= 10)
	{
		printf("%d   ", count);
		++count;
	}

	printf("\n\n");

	return 0;
}