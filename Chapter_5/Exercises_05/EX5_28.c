//-----------------------------------------------------------------------------
// Program: Ex 5.28 - Reversing Digits
// Programmer: Joseph Cunningham
// Date: 11/2/15
//
// This program takes an integer input and reverses it
//-----------------------------------------------------------------------------
#include <stdio.h>

int reverseDigits(int);

int main()
{
	// Variable declaration

	int number;

	// Prompt user for number

	printf("Enter a number between 1 and 9999: ");
	scanf("%d", &number);

	// Output the number

	printf("The number with its digits reversed is: %d\n",
		reverseDigits(number));

	return 0;
}

int reverseDigits(int n)
{
	int reverse = 0, divisor = 1000, multiplier = 1;

	while (n > 10)
	{
		if (n >= divisor)
		{
			reverse += n / divisor * multiplier;
			n %= divisor;
			divisor /= 10;
			multiplier *= 10;
		}
		else
			divisor /= 10;
	}

	reverse += n * multiplier;

	return reverse;
}

