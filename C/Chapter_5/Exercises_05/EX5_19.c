//-----------------------------------------------------------------------------
// Program:  Ex 5-19 - Square of Astricks
// Programmer:  Joseph Cunningham
// Date:  11/2/15
//
// This program displays a square of astriks the size specified by the user
//-----------------------------------------------------------------------------
#include<stdio.h>

void display(int side);

int main(void)
{
	// Declare variables
	int num;  // Number of rows for square

	// Prompt user for number
	printf("Please enter a number: ");
	scanf("%d", &num);

	// Call function

	display(num);

	return 0;
}

//-----------------------------------------------------------------------------
// Function: void display(int side)
// Input:  int value for number of astriks
// Output: None
//-----------------------------------------------------------------------------
void display(int side)
{
	int i = 1;  // while loop control
	int j;  // For loop control variable

	while (i <= side)
	{
		for (j = 1; j <= side; j++)
			printf("*");
		printf("\n");
		i++;
	}
}