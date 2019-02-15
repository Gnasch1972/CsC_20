// Fig 4.5: Fig4_5.cpp
// Summation with a for statement

#include<stdio.h>

// Function main begins program execution

int main(void)
{
	int sum = 0;  // Initialize sum
	int number;  // Number to be added to sum

	for (number = 2; number <= 100; number += 2)
	{
		sum += number;  // Add number to sum
	}

	// Output sum

	printf("Sum is %d\n", sum);

	return 0;
}