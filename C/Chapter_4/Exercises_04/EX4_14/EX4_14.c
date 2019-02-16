//-----------------------------------------------------------------------------
// Program:  Ex 4.14 - Factorials
// Programmer:  Joseph Cunningham
// Date:  10/6/15
//
// This program will calculate the factorials of numbers 1-5 and output them
// in tabular form.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	// int n = 5;  // While loop variable control
	int fact;  // Store the factorial
	int i; 
	int c = 1;  // for loop control variable

	// Output headers

	printf("\nn\tn!\n");
	printf("---------------\n");

	// Calculate the factorials

	for (i = 1; i <= 5; i++)
	{
		fact = 1;
		
		for (c = 1; c <= i; c++)
		{
			fact = fact * c;
		}

		printf("%d\t%d\n", i, fact);

		//n++;
		
	}

	return 0;
}
