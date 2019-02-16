//-----------------------------------------------------------------------------
// Program:  Ex 5.15 - Hypotenuse Calculations
// Programming: Joseph Cunningham
// Date: 11/1/15
//
// This program reads in two side of a triagle and returns the length of the 
// hypotenuse
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<math.h>

double hypotenuse(double x, double y);

int main(void)
{
	// Declare variables

	int i;  // while loop controll variable
	double side1, side2; // Sides of a triangle input by user
	double hypot;  // Retuned value for the hypotenuse

	// While there is still data to enter
	for (i = 1; i <= 3; i++)
	{
		// Prompt user for data
		printf("Please enter two sides for a right triangle: ");
		scanf("%lf %lf", &side1, &side2);

		// Call function
		hypot = hypotenuse(side1, side2);

		// Output data
		printf("For a triangle with %.2f and %.2f the hypotenues is %.2f\n",
			side1, side2, hypot);
			
	}

	return 0;
}

//-----------------------------------------------------------------------------
// Function:  double hypotenuse(double x, doubley)
// Input: Two double values: sides of a right triangle
// Ouptut:  Double value:  hypotenuse of a right triangle
//-----------------------------------------------------------------------------
double hypotenuse(double x, double y)
{
	// Declare varibales
	double sideSum;  // Sum of the squares of the sides

	// Calcualte the sum of the squares of the sides

	sideSum = pow(x, 2) + pow(y, 2);

	return sqrt(sideSum);
}
