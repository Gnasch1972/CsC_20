//  Fig 5.14: Fig5_14.cpp
//  Recursive factortial function

#include<stdio.h>

long factorial(long number);  // Function prototype

// Function main begine program execution

int main(void)
{

	int i;  // Counter

	// Loop 11 times;  during each interation, calculate factorial(i) and 
	// display result

	for (i = 0; i <= 10; i++)
	{

		printf("%2d! = %ld\n", i, factorial(i));
	}

	return 0;
}

// Recursive definiiton of function factorial

long factorial(long number)
{

	// Base case

	if (number <= 1)
	{
		return 1;
	}

	else
	{
		return(number*factorial(number - 1));
	}
}
