//-----------------------------------------------------------------------------
// Program: EX 4.13 - Calculating the Product of Odd Integers
// Programmer: Joseph Cunningham
// Date: 10/6/15
// 
// Sums and outputs the sum of odd integers from 1-15
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int i = 1;  // For loop counter
	int prod = 1;  // Prod of the odd integers

	for (; i <= 15; i += 2)
	{
		prod *= i;
    printf("i = %d, prod = %d\n", i, prod);
	}

	printf("Sum = %d\n", prod);

	return 0;
}
