// Fig5.10:  Fig5_10.cpp
// Simulates a game a craps

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//  Enumeration constants represents game status

enum Status {CONTINUE, WON, LOST};

// Function prototyping

int rollDice(void);

// Function main begins program execution

int main(void)
{

	int sum;  // Sum of rolled dice
	int myPoint; // Point earned

	enum Status gameStatus; // Can contain CONTINUE, WON, or LOST

	// Randomize random number generator using current time

	srand(time(NULL));

	sum = rollDice();  // First roll of dice

	// Determine game status based on sum of dice

	switch (sum)
	{

		// Win on first roll

	case 7:
	case 11:
		gameStatus = WON;
		break;

		// Lose on first roll

	case 2:
	case 3:
	case 12: 
		gameStatus = LOST;
		break;

		// Remeber point

	default:
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;
	}

	// While game is not complete
	
	while (gameStatus == CONTINUE)
	{

		sum = rollDice();  // Roll dice again

		// Determine game status

		if (sum == myPoint)
		{

			gameStatus = WON;  // Win by making point

		}

		else
		{
			if (sum == 7) // Lose by rolling 7
			{
				gameStatus = LOST;  // Game over, player lost
			}
		}
	}

	// Display won or lost message

	if (gameStatus == WON) // did player win?
	{

		printf("Player wins!\n");

	}

	else // Player lost
	{

		printf("Player loses\n");

	}

	return 0;
}

// Roll dice, calculate sum and display results

int rollDice(void)
{

	int die1;  // First die
	int die2;  // Second die
	int workSum;  // Sum of dice

	die1 = 1 + (rand() % 6);  //  Pick random die 1 value
	die2 = 1 + (rand() % 6);  //  Pick random die 2 value
	workSum = die1 + die2;  // sum die1 and die2

	// Display results of this roll

	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;  // return sum of dice
}