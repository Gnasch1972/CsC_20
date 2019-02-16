// Fig 5.15: Fig5_15.cpp
// Recurvsive fibonacci seriers

#include<stdio.h>

long fibonacci(long n);  //Fucntion prototype

// Function main begins program execution

int main(void)
{

	long result;  // Fibonacci value
	long number;  // number input by user

	// Obtain value from user

	printf("Enter an integer: ");
	scanf("%ld", &number);

	// Calculate Fibonacci value from user input

	result = fibonacci(number);

	// Display result

	printf("Fibonacci(%ld) = %ld\n", number, result);

	return 0;
}

// Recursive definition of function fibonacci 

long fibonacci(long n)
{

	// Base case

	if (n == 0 || n == 1)
	{

		return n;
	}

	else
	{
		// Recursive step

		return fibonacci(n - 1) + fibonacci(n - 2);

	}
}