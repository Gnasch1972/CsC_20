//-----------------------------------------------------------------------------
// Program:  Ex 3.47 - World Population Growth Calculator
// Programmer:  Joseph Cunningham
// Date: 10/28/15
// 
// This program calculates the world population for the next 5 years.  The user
// enters the world population right now and the growth rate.  The program 
// outputs in tabular form the estimated world population for the next 5 years
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{

	// Declare Variables

	double worldPop;  // Starting world population
	float growthRate;  // User entered growth rate
	int i;  // for loop controll variable

	// Prompt user for data
	printf("Please enter the statrting world population: ");
	scanf("%lf", &worldPop);

	printf("Please enter a growth rate in percent: ");
	scanf("%f", &growthRate);

	// Calculate growth rate

	growthRate /= 100;

	// Print table header

	printf("%4s%21s\n", "Year", "World Population");

	// Output world population for the next 5 years

	for (i = 1; i <= 5; i++)
	{
		worldPop += worldPop * growthRate;
		printf("%3lu%21.0f\n", i, worldPop);
	}

	return 0;
}