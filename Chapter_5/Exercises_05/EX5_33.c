//-----------------------------------------------------------------------------
// Program: Ex 5.33 - Guess the Number
// Programming:  Joseph Cunningham
// Date: 11/2/15
//
// This program asks as user to guess a number between 1  - 1000.  It gives the
// player a hint whether the guess is too high or low.  It congradulates the 
// play when they guess the number.  It also keeps track of the number of 
// guesses.  It will make a comment depending on how many guesses were made.
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int decision(int number, int guess);
void comment(int guesses);

int main(void)
{
	// Declare variable
	int number;  // The secret number
	int guess;  // Players guess
	char question = 'Y'; // Play again or not
	int result; // Function return value 1 = right, 0 = wrong
	int guesses = 0;

	// Initialize the random number

	srand(time(NULL));

	number = 1 + (rand() % 1000); // Computer number

											// Greeting

	printf("I have a number between 1 and 1000\n");
	printf("Can you guess my number\n");

	// Get input

	printf("Please type your first guess: ");
	scanf("%d", &guess);
	

	while (question == 'Y')
	{
		while (guess < 1 || guess > 1000)
		{
			printf("NOT A VALID GUESS\n");
			printf("Please type another guess: ");
			scanf("%d", &guess);
		}

		// Call function and get decision

		guesses++;
		result = decision(number, guess);

		if (result == 1)
		{
			comment(guesses);

			printf("Would you like to play again (Y or N)? ");
			scanf(" %c", &question);

			if (question == 'Y')
			{
				guesses = 0;
				number = 1 + (rand() % 1000); // Computer number
				printf("I have a number between 1 and 1000\n");
				printf("Can you guess my number\n");
				printf("Please type your first guess: ");
				scanf("%d", &guess);
			}
		}
		else
		{
			printf("Please type another guess: ");
			scanf("%d", &guess);
		}
	}

	printf("Thank you for playing\n");

	return 0;
}

//-----------------------------------------------------------------------------
// Function: int decision(int number, int guess)
// Input: int values - number - the number to be guessed
//							  guess - the players guess
// Output:  int value - 1 is the right guess, 0 wrong guess
//-----------------------------------------------------------------------------
int decision(int number, int guess)
{
	if (guess == number)
	{
		printf("Excellent! You guessed the number!\n");
		return 1;
	}

	else if (guess > number)
	{
		printf("Too High. Try again\n");
		return 0;
	}

	else
	{
		printf("Too Low.  Try again\n");
		return 0;
	}
}

//-----------------------------------------------------------------------------
// void comment(int guesses)
// Input - int value number of guesses
// Output - None
//-----------------------------------------------------------------------------
void comment(int guesses)
{
	if (guesses < 10)
		printf("Either you know the secret or you got lucky\n");
	else if (guesses == 10)
		printf("Ahah!  You know the secret\n");
	else
		printf("You should be able to do better!\n");
}