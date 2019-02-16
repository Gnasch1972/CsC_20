//-----------------------------------------------------------------------------
// Program:  Ex 5-20 - Square of Any character
// Programmer:  Joseph Cunningham
// Date:  11/2/15
//
// This program displays a square any character the size specified by the user
//-----------------------------------------------------------------------------
#include<stdio.h>

void display(int side, char fillCharacter);

int main(void)
{
	// Declare variables
	int num;  // Number of rows for square
	char letter; // Charactert to be printed

	// Prompt user for number
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("Please enter a character: ");
	scanf(" %c", &letter);

	// Call function

	display(num, letter);

	return 0;
}

//-----------------------------------------------------------------------------
// Function: void display(int side, char fillCharacter)
// Input:  int value for number of characters,
//			  char value for character
// Output: None
//-----------------------------------------------------------------------------
void display(int side,  char fillCharacter)
{
	int i = 1;  // while loop control
	int j;  // For loop control variable

	while (i <= side)
	{
		for (j = 1; j <= side; j++)
			printf("%c", fillCharacter);
		printf("\n");
		i++;
	}
}