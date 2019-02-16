// Fig 4.2:  Fig4_2
// Counter-controlled repetition with the for statement

#include<stdio.h>

// Function main begins program execution

int main(void)
{
	int counter;  // Define counter

	// Intialization, repetition condition, and increment are all 
	// included in the for statement.

	for (counter = 1; counter <= 10; counter++)
	{
		printf("%d\n", counter);
	}
	
	return 0;
}
