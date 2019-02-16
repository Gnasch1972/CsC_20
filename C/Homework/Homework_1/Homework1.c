//--------------------------------------------------------------------------
// Homework 1
// Programmer:  Joseph Cunningham
// Class: Engr 50 Section 1
// Date: Sept 5, 2015
//--------------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
	//----------------------------------------------------------------------
	// Homework 1, Part 1:  Shape with asterisks
	//
	//  This program will output the shape O made of asterisks
	//----------------------------------------------------------------------

	printf("     ***\n");
	printf("\n");
	printf("  *       *\n");
	printf("\n");
	printf("*           *\n");
	printf("\n");
	printf("*           *\n");
	printf("\n");
	printf("*           *\n");
	printf("\n");
	printf("*           *\n");
	printf("\n");
	printf("*           *\n");
	printf("\n");
	printf("  *       *\n");
	printf("\n");
	printf("     ***\n");

	//----------------------------------------------------------------------
	// Homework 1, Part 2: Separating digits in an Integer
	//
	// This program will prompt a user foa postive 5 digit integer.  If the 
	// number is not positive or is greater than 5 digits an error message 
	// will be generated and the program will end.  If a positive 5 digit 
	// number is entered then the number will be separated out into its 
	// individual number, the sum and integer average will be output.
	// Finally the largest integer in the number will also be output.
	//----------------------------------------------------------------------

	int number;  // User entered integer
	int temp;  // Used to store number as it gets separated
	int digit1, digit2, digit3, digit4, digit5; // Separated numbers
	int sum; // Sum of the digits
	int average; // Average of the digits
	int max; //  Largest digit

	// Prompt the user for a number

	printf("\nEnter a positive 5 digit number\n");
	scanf("%d", &number);

	//printf("%d", number);

	// If the number is not a postive 5 digit integer an error is printed

	if (number < 0){
		printf("The number entered is less than 0\n");
		return 0;
	}
	if (number > 99999){
		printf("The number entered is larger than 5 digits\n");
		return 0;
	}

	//  Separate out the digits

	digit1 = number / 10000;
	temp = number - digit1 * 10000;

	digit2 = temp / 1000;
	temp = temp - digit2 * 1000;

	digit3 = temp / 100;
	temp = temp - digit3 * 100;

	digit4 = temp / 10;
	digit5 = temp - digit4 * 10;

	// Output the separated number

	printf("%d can be separated into: %d %d %d %d %d\n", number, digit1, digit2, digit3, digit4, digit5);

	// Find the sum and average of the digits and output

	sum = digit1 + digit2 + digit3 + digit4 + digit5;

	average = sum / 5;

	printf("The sum of the 5 individual digits is: %d", sum);
	printf("\nThe averages of the 5 individual digits is: %d", average);
	printf("\n");

	//  Find the largest digit

	max = digit1;

	if(max < digit2)
		max = digit2;
	
	if(max < digit3)
		max = digit3;

	if(max < digit4)
		max = digit4;

	if(max < digit5)
		max = digit5;

	// Output max number

	printf("\nThe largest digit value is: %d\n", max);
	return 0;
}