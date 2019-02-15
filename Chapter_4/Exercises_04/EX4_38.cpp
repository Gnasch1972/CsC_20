//-----------------------------------------------------------------------------
// Program:  Ex 4.38 - World Population Growth 
// Programmer:  Joseph Cunningham
// Date: 10/28/15
// 
// This program calculates the world population for the next 75 years.  The user
// enters the world population right now and the growth rate.  The program 
// outputs in tabular form the estimated world population for the next 75 years
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{

	// Declare Variables

	double worldPopCurr;  // Starting world population
	double worldPopLast;  // Last year world pop
	double change; // Change from the last year
	float growthRate;  // User entered growth rate
	int i;  // for loop controll variable

			  // Prompt user for data
	printf("Please enter the statrting world population: ");
	scanf("%lf", &worldPopCurr);

	printf("Please enter a growth rate in percent: ");
	scanf("%f", &growthRate);

	// Calculate growth rate

	growthRate /= 100;

	// Print table header

	printf("%4s%21s%21s\n", "Year", "World Population", "Change");

	// Output world population for the next 5 years

	for (i = 1; i <= 75; i++)
	{
		worldPopLast = worldPopCurr;
		worldPopCurr = worldPopLast + worldPopLast * growthRate;
		change = worldPopCurr - worldPopLast;

		printf("%3lu%21.0f%21.0f\n", i, worldPopCurr, change);
	}

	return 0;
}