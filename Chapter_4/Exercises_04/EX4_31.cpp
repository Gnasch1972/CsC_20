//-----------------------------------------------------------------------------
// Program 4.31 - Diamond Printing Problem
// Programmer:  Joseph Cunningham
// Date 11/1/15
//
//  This program prints a diamond shape 
//-----------------------------------------------------------------------------
#include<stdio.h>;

int main(void)
{
	int lines;  // Number of lines
	int spaces;  // Number of spaces
	int astrisks;  // Number of astricks

	// Top half

	for (lines = 1; lines <= 9; lines += 2)
	{
		for (spaces = (9 - lines) / 2; spaces > 0; spaces--)
			printf(" ");

		for (astrisks = 1; astrisks <= lines; astrisks++)
			printf("*");

		printf("\n");
	}

	// Bottome half

	for (lines = 7; lines >= 0; lines -= 2)
	{
		for (spaces = (9 - lines) / 2; spaces > 0; spaces--)
			printf(" ");

		for (astrisks = 1; astrisks <= lines; astrisks++)
			printf("*");

		printf("\n");
	}
	return 0;
}