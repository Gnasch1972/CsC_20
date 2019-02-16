//-----------------------------------------------------------------------------
// Program:  Ex 5.22 - Separating Digits
// Programmmer:  Joseph Cunningham
// Date: 11/2/15
//
// This program will take an input a digit from 1 - 32767 and separate it 
// into its individual digits.
//-----------------------------------------------------------------------------
#include<stdio.h>

void separate(int x);

int main(void)
{
	// Declare variables
	int number;  // Number entered by the user

	// Prompt user for a number
	printf("Please enter a number from 1 - 32767: ");
	scanf("%d", &number);

	//  Call function
	separate(number);

	return 0;
}

//-----------------------------------------------------------------------------
// Function:  void separate(int x)
// Input: int value - number to be separated
// Output - none
//-----------------------------------------------------------------------------
void separate(int x)
{
	if (x > 10000)
	{
		printf("%d  ", x / 10000);
		x %= 10000;
	}

	if (x > 1000)
	{
		printf("%d  ", x / 1000);
		x %= 1000;
	}

	if (x > 100)
	{
		printf("%d  ", x / 100);
		x %= 100;

	}

	if (x > 10)
	{
		printf("%d  ", x / 10);
		x %= 10;
	}

	printf("%d", x);

	printf("\n");

}