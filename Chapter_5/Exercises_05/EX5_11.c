//-----------------------------------------------------------------------------
// Program:  Ex 5.11 - Rounding Numbers II
// Programmer:  Joseph Cunningham
// Date:  11/1/15
//
// This progame will round a number input by the user to the nearest integer,
// nearest tenth, nearest hundreth, and the nearest thousandth.  It will read
// until the user wishes to quit
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<math.h>

// Function declaration

int roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

int main(void)
{
	// Variable declaraion

	float number; // Number input by user
	int integer;  // Number rounded to the nearest integer
	float tenth; // Number rounded to the nearest tenth
	float hundreth; // Number rounded to the nearest hundreth
	float thousandth;  // Number rounded to the nearest thousandth

	// Prompt user for input
	printf("Please input a number to be rounded(-1 to exit): ");
	scanf("%f", &number);

	// while the sentinel value has not been entered

	while ((int)number != -1)
	{
		// Preform rounding

		integer = roundToInteger(number);
		tenth = roundToTenths(number);
		hundreth = roundToHundreths(number);
		thousandth = roundToThousandths(number);

		// Output results

		printf("Results of Rounding: \n");
		printf("%f(intger) = %d\n", number, integer);
		printf("%f(tenths) = %.1f\n", number, tenth);
		printf("%f(hundreths) = %.2f\n", number, hundreth);
		printf("%f(thousandths) = %.3f\n", number, thousandth);

		// Prompt user for another number

		printf("Please input a number to be rounded(-1 to exit): ");
		scanf("%f", &number);
	}

	return 0;
}

//-----------------------------------------------------------------------------
// Function int roundToInteger(float number)
// Input:  float number - number to be rounded
// Output: int value:  rounded number to the nearest integer
//-----------------------------------------------------------------------------
int roundToInteger(float number)
{
	return floor(number + 0.5);
}

//-----------------------------------------------------------------------------
// Function int roundToTenths(float number)
// Input:  float number - number to be rounded
// Output: int value:  rounded number to the nearest tenth
//-----------------------------------------------------------------------------
float roundToTenths(float number)
{
	return floor(number * 10 + 0.5) / 10;
}

//-----------------------------------------------------------------------------
// Function int roundToHundreths(float number)
// Input:  float number - number to be rounded
// Output: int value:  rounded number to the nearest hundreth
//-----------------------------------------------------------------------------
float roundToHundreths(float number)
{
	return floor(number * 100 + 0.5) / 100;
}

//-----------------------------------------------------------------------------
// Function int roundToThousandths(float number)
// Input:  float number - number to be rounded
// Output: int value:  rounded number to the nearest thousandth
//-----------------------------------------------------------------------------
float roundToThousandths(float number)
{
	return floor(number * 1000 + 0.5) / 1000;
}