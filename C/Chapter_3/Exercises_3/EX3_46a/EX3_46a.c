//-----------------------------------------------------------------------------
// Program:  Ex 3.46a - Plain Factorial
// Programmer:  Joseph Cunningham
// Date: 10/27/15
//
// This program calculate the factorial of a number input by the user
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables

	int n;  // User input value
	int i;
	int fact = 1;  // Caluculated factorial

	// Prompt user for number
	printf("Please enter a nonegative integer: ");
	scanf("%d", &n);

	i = n;

	if (i == 0)
	{
		printf("%d! = %d\n", n, n);
		--i;
	}

	// Calculate the factorial

	while (i > 0)
	{
		fact = fact * i;
		--i;
	}

	printf("%d! = %d\n", n, fact);

	return 0;

}