//-----------------------------------------------------------------------------
// Program:  Ex 5.31 - Coin Flip
// Programmer:  Joseph Cunningham
// Date: 5/22/15
//
// This program simulates a coin flip.  It will flip a coin n times.  Each flip
// will be printed on the screen and at the end the total head and tails will 
// be output.
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip();

int main(void)
{
	// Declare variables

	int i; // for loop control variable
	int numFlip = 100; // Number of coin flips
	int heads = 0; // Number of total heads that occur
	int tails = 0;  // Number of total tails that occur
	int coin;  // Function return, 1 = heads, 0 = tails

	// Initialize srand

	srand(time(NULL));

	// Flip a coin

	for (i = 1; i <= numFlip; i++)
	{
		coin = flip();

		// Tally and print heads or tails

		if (coin == 1)
		{
			printf("Heads\n");
			heads++;
		}

		else
		{
			printf("Tails\n");
			tails++;
		}
	}

	printf("\nFor %d number of coins flipped\n", numFlip);
	printf("Heads = %d\tTails = %d\n", heads, tails);

	return 0;
}

//-----------------------------------------------------------------------------
// Function:  int flip()
// Input:  None
// Output: 1 = heads, 0 = tails
//-----------------------------------------------------------------------------
int flip()
{
	return rand() % 2;
}