// Fig 5.9: Fig5_9.cpp
// Randomizing die-rolling program

#include<stdio.h>
#include<stdlib.h>

// Function main begins program execuiton

int main(void)
{

	int i; // Counter
	unsigned seed;   // Number used to see random number

	printf("Enter seed: ");
	scanf("%u", &seed);  // Note %u for unsigned

	srand(seed);

	// Loop 10 times

	for (i = 1; i <= 10; i++)
	{

		// Pick a random number from 1 to 6 and output it

		printf("%10d", 1 + (rand() % 6));

		// If counter is divisible by 5, begin a new line of output

		if (i % 5 == 0)
		{

			printf("\n");

		}
	}

	return 0;
}