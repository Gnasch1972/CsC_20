//-----------------------------------------------------------------------------
// Program:  Ex 5.25 - Find the Minimum
// Programmer:  Joseph Cunningham
// Date: 10/21/05
//
// This program finds the minimum float value of 3 floats that are input by
// the user.
//-----------------------------------------------------------------------------
#include<stdio.h>

float smallest(float a, float b, float c);

int main(void)
{
	// Declare variables

	float x, y, z;  // Floating-point values entered by the user
	float least;  // Function return value...smalles float entered

	// Prompt the user for 3 floating point values

	printf("Please enter 3 floating point values: ");
	scanf("%f %f %f", &x, &y, &z);

	// Call the function

	least = smallest(x, y, z);

	// Output data

	printf("\nThe three numbers entered were %.2f %.2f %.2f\n", x, y, z);
	printf("The smalles is %.2f\n", least);

	return 0;
}

//-----------------------------------------------------------------------------
// Function:  float smallest(float a, float b, float c)
// Input:  3 float values - a, b and c
// Output:  1 float value - smallest of a, b or c
//-----------------------------------------------------------------------------

float smallest(float a, float b, float c)
{
	float least;  // Smallest of the numbers passed

	least = a;

	if (b < least)
		least = b;
	if (c < least)
		least = c;

	return least;
}