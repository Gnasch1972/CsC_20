//-----------------------------------------------------------------------------
// Program:  Table of Decimal, Hexidecimal and Binary Values
// Programmer:  Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/20/19    
//
//  This program will print a table of the unsigned values in the Decimal, 
//  Hexidecimal, and Binary formats.  The table size is determined by the
//  number of bits the user specifies to display.  The bit range can be 
//  from 1 to 16 bits.
//-----------------------------------------------------------------------------

#include <stdio.h>  // For input / output
#include <math.h>  // For pow(x,y) function

int main(void)
{

	// Varibale declarartion

	int numBits;   // Number of bits entered by the user
	int number;  // Number being printed
	int tempNum;  // Stores number for the second for loop
	int lastValue;  // Last value in the list
	int positionValue;  // The position of the binary digit
	int i;  // Second loop counter

	// Print rules

	printf("This program will print a table of the unsigned values in the Decimal\n");
	printf("Hexidecimal, and Binary formats.  The table size is determined by the number of\n");
	printf("bits the user specifies to display.  The bit range can be from 1 to 16 bits.\n\n");

	// Query user for the number of bits

	printf("Input the number of bits to show in the table [1-16]: ");
	scanf("%d", &numBits);

	// Calculate the last value of the table

	lastValue = pow((double)2, (double)(numBits));

	// Print heading

	printf("\n\n%4s%21s%21s\n", "Decimal", "Hexidecimal", "Binary\n");
	printf("----------------------------------------------------\n");

	// Print the decimal and Hex numbers
	// Calculate the binary number and print it

	for(number = 0; number < lastValue; ++number)
	{
		printf("%4d%21x", number, number);
		printf("\t\t     ");
		
		// Assign number to tempNumber and calculates the positionValue

		tempNum = number;
		positionValue = lastValue / 2;

		for(i = 0; i < numBits; ++i)
		{
			if(tempNum < positionValue)
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
