//-----------------------------------------------------------------------------
// Program: Ex 5.52 - Computer - Assisted Instruction
// Programmer:  Joseph Cunningham
// Date: 11/11/15
//
// This program helps a student learn their math facts in single-digit 
// multiplication.  It allows the user to guess until they get it right
// It ask 10 questions and keeps track of the number of right and worng.
// If the percentage is less than 75% a get help message is displayed
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void multiplication(void);

int main(void)
{


	srand(time(NULL));

	multiplication();

	printf("Thanks for playing!\n");

}

void multiplication(void)
{
	int x;
	int y;
	int answer;
	int guess;
	char yOrN;
	int choice;
	int wrong = 0;
	int right = 0;	

	for (int i = 1; i <= 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;

		answer = x * y;

		printf("How much is %d time %d? ", x, y);
		scanf("%d", &guess);

		while (guess != answer)
		{
			choice = 1 + rand() % 4;
			switch (choice)
			{
			case 1:
				printf("No, please try again.\n");
				break;

			case 2:
				printf("Wrong. Try once again.\n");
				break;

			case 3:
				printf("Don't give up!.\n");
				break;

			case 4:
				printf("No. Keep trying.\n");
				break;
			}

			wrong++;

			printf("How much is %d time %d? ", x, y);
			scanf("%d", &guess);
		}

		choice = 1 + rand() % 4;

		switch (choice)
		{
		case 1:
			printf("Very Good!\n");
			break;

		case 2:
			printf("Excellent!\n");
			break;

		case 3:
			printf("Nice Work!\n");
			break;

		case 4:
			printf("Keep up the good work!\n");
			break;
		}

	}

	if (((double)right)/(right + wrong) < 0.75)
		printf("Please get help from your instructor.\n");
}