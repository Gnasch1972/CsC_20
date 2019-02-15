//-----------------------------------------------------------------------------
// Program:  EX 4.25 - Table of Decimal, Binary, Octal and Hex Equaivalents
// Programmer:  Joseph Cunningham
// Date: 10/10/15
//
// This program will print a table of decimal, binary, Octal and Hex
// equivalents
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	// Varibale declarartion

	int number;  // Number being printed
	int tempNum;  // Stores number for the second for loop
	int lastValue = 256;  // Last value in the list
	int positionValue;  // The position of the binary digit
	int i;  // Second loop counter

			  // Print rules

	printf("This program will print a table of the unsigned values in the Decimal\n");
	printf("Hexidecimal, Ocatal and Binary formats.\n");

	// Print heading

	printf("\n\n%4s%21s%21s%21s\n", "Decimal", "Octal", "Hexidecimal", "Binary\n");
	printf("-------------------------------------------------------------------\n");

	// Print the decimal and Hex numbers
	// Calculate the binary number and print it

	for (number = 0; number < lastValue; ++number)
	{
		printf("%4d%21o%21x", number, number, number);
		printf("\t\t     ");

		// Assign number to tempNumber and calculates the positionValue

		tempNum = number;
		positionValue = lastValue / 2;

		for (i = 0; i < 8; ++i)
		{
			if (tempNum < positionValue)
			{
				printf("0");
			}

			else
			{
				printf("1");
				tempNum = tempNum - positionValue;
			}

			positionValue = positionValue / 2;
		}

		printf("\n");
	}

	return 0;
}
