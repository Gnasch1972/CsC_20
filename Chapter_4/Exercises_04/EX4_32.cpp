//-----------------------------------------------------------------------------
// Program 4.32 - Modified Diamond Printing Problem
// Programmer:  Joseph Cunningham
// Date 11/1/15
//
//  This program prints a diamond shape with input from the user.  The user
//  inputs a odd number from 1 - 19 which speicifes the number of rows the 
//  diamond has.
//-----------------------------------------------------------------------------
#include<stdio.h>;

int main(void)
{
	int n;  // Number of rows diamond should have
	int lines;  // Number of lines
	int spaces;  // Number of spaces
	int astrisks;  // Number of astricks

	// Prompt the user for the number of rows

	printf("Please enter the number of row for the diamond: ");
	scanf("%d", &n);

	// Top half

	for (lines = 1; lines <= 2*n-1; lines += 2)
	{
		for (spaces = (9 - lines) / 2; spaces > 0; spaces--)
			printf(" ");

		for (astrisks = 1; astrisks <= lines; astrisks++)
			printf("*");

		printf("\n");
	}

	// Bottome half

	for (lines = 2*n-3; lines >= 0; lines -= 2)
	{
		for (spaces = (9 - lines) / 2; spaces > 0; spaces--)
			printf(" ");

		for (astrisks = 1; astrisks <= lines; astrisks++)
			printf("*");

		printf("\n");
	}
	return 0;
}