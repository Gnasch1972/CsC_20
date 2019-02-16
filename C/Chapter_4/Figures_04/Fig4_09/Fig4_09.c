// Fig 4.9: Fig4_9.cpp
// Using the do/while repitition statement

#include<stdio.h>

// Function main begins program execution

int main(void)
{
	int counter = 1; // Initialize counter

	do {
		printf("%d ", counter);  //  Display counter
	} while (++counter <= 10); // End do...while

	return 0;
}