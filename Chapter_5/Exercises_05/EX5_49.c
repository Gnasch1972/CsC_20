//-----------------------------------------------------------------------------
// Program: Ex 5.49 - Computer - Assisted Instruction
// Programmer:  Joseph Cunningham
// Date: 11/11/15
//
// This program helps a student learn their math facts in single-digit 
// multiplication.  It allows the user to guess until they get it right
// It also lets the user quit when ever they want.
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char question(void);

int main(void)
{

	char optionYN = 'Y';  // If the user wants to play again


	srand(time(NULL));


	while (optionYN == 'Y')
	{
		optionYN = question();
	}

	printf("Thanks for playing!\n");

}

char question(void)
{
	int x;
	int y;
	int answer;
	int guess;
	char yOrN;

	x = rand() % 10;
	y = rand() % 10;

	answer = x * y;

	printf("How much is %d time %d? ", x, y);
	scanf("%d", &guess);

	while (guess != answer)
	{
		printf("No, please try again.\n");
		printf("How much is %d time %d? ", x, y);
		scanf("%d", &guess);
	}

	printf("Very Good!\n");
	printf("Would you like another question? ");
	scanf(" %c", &yOrN);
	return yOrN;
	
}