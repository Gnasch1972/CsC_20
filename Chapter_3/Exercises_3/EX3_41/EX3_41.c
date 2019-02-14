//-----------------------------------------------------------------------------
// Program: EX3.41 - Multiples of 2 with an Infinite Loop
// Programmer: Joseph Cunningham
// Date:  10/5/15
//
// Creates a infinite loop with powers of two
//-----------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>

int main(void)
{

	int count = 1;
	double x;

	for (count = 1; count > 0; count++)
	{
		x = pow(2.0, (double)count);
		printf("%f\n", x);
	}

	return 0;
}