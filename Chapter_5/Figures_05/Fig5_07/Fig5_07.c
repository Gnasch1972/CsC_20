// Fig 5.7:  Fig5_7.cpp
// Shifted, scaled integers by 1 + rand % 6

#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int i; // Counter

	// Loop 20 times

	for (i = 1; i <= 20; i++)
	{

		printf("%10d", 1 + (rand() % 6));

		// If the counter is divisible by 5, 1 to 6 and output it

		if (i % 5 == 0)
		{

			printf("\n");

		}
	}

	return 0;
}