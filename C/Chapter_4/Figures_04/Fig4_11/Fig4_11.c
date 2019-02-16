// Fig 4.11: Fig4_11.cpp
//  Using a break statement in a for statement

#include<stdio.h>

// Function main begins program execution

int main(void)
{
	int x; // Counter

	//  Loop 10 times

	for (x = 1; x <= 10; x++)
	{
		// If x is 5 terminate loop

		if (x == 5)
		{
			break;
		}

		// Display value of x

		printf("%d ", x);
	}

	printf("\nBroke out of at loop at x == %d\n", x);

	return 0;
}