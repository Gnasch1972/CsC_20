// Fig 4.12: Fig4_12.cpp
// Using the continue statement in a for statement

#include<stdio.h>

// Function main begins program execution

int main(void)
{
	int x;  // Counter

	//  Loop 10 times

	for (x = 1; x <= 10; x++)
	{
		// If x is 5, continue with the next iteration of the loop

		if (x == 5)
		{
			continue;  // Skip remaining code in the loop body
		}

		// Display value of x

		printf("%d ", x);
	}

	printf("\n Used continue to skip printing the value of 5\n");

	return 0;
}