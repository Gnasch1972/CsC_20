//-----------------------------------------------------------------------------
// Program: EX 3.39 - Counting 7s
// Programmer:  Joseph Cunningham
// Date: 10/5/15
//
// This program will count the number of 7s in a integer input by the user
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	int number;  // Number input buy the user
	int temp;  // Stores a copy of number
	int count = 0; // Stores the number of 7s
	bool x;

	// Prompt the user for the number

	printf("Please input a number: ");
	scanf("%d", &number);

	// Counting the numbers

	temp = number;

	while (temp > 0)
	{
		if ((temp % 10) == 7)
		{
			count += 1;
		}

		temp = temp / 10;
	}

	printf("The number of 7s in %d = %d\n", number, count);

}