//-----------------------------------------------------------------------------
// Program: EX 4.12 - Calculating the Sum of Even Integers
// Programmer: Joseph Cunningham
// Date: 10/6/15
// 
// Sums and outputs the sum of even integers from 2-30
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
  int i; // loop counter	
	int sum = 0;  // Sum of the even integers

	for (i=2; i <= 30; i += 2)
	{
		sum += i;
	}

	printf("Sum = %d\n", sum);

	return 0;
}
