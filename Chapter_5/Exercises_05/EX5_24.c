//-----------------------------------------------------------------------------
// Program:  EX 5.24 - Temperature Conversions
// Programmer: Joseph Cunningham
// Date: 10/20/15
//
// This program prints two charts.  A Celcius -> Fahrenheit and a 
// Fahrenheit -> Celcius table.
//-----------------------------------------------------------------------------
#include<stdio.h>

double degF(double degC);
double degC(double degF);

int main(void)
{
	// Declare variables

	int i, j;  // For loop control variables
	double degFahr;  // Function return value for degrees Fahrenheit
	double degCel; // Function retrun value for degress Celcius


	// Output heading

	printf("Celcius (C)\tFahrenheit (F)\n");

	// Print table of values

	for (i = 0; i <= 100; i++)
	{
		degFahr = degF((double(i)));
		printf("   %d\t\t    %.2f\n", i, degFahr);
	}

	printf("\n");

	// Output heading

	printf("Fahrenheit (F)\tCelcius\n");

	// Print table of values

	for (j = 32; j <= 212; j++)
	{
		degCel = degC((double(j)));
		printf("     %d\t\t %.2f\n", j, degCel);
	}

	return 0;
}

//-----------------------------------------------------------------------------
// Fucntion:  double degF(double degC) Converts degrees celcius to degree
//													fahrenheit
// Input: double value for degrees celcius
// Output: double value for degree farhrenheit
//-----------------------------------------------------------------------------
double degF(double degC)
{
	return degC * (9.0 / 5.0) + 32.0;
}

//-----------------------------------------------------------------------------
// Fucntion:  double degC(double degF) Converts degrees fahrenheit to degrees
//													celcius
// Input: double value for degrees fahrenheit
// Output: double value for degree celcius
//-----------------------------------------------------------------------------
double degC(double degF)
{
	return (degF - 32) * (5.0 / 9.0) ;
}