//-----------------------------------------------------------------------------
// Program: Ex 3.44 - Sides of a Triangle
// Programmer:  Joseph Cunningham
// Date: 10/27/15
//
// This program reads in 3 sides input from the user.  It determines and prints
// if the sides for a triangle or not.
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variable
	float a, b, c;  // Sides input from user

	// Prompt user
	printf("Please input three integer sides: ");
	scanf("%f %f %f", &a, &b, &c);

	// Determine if the sides form a triangle

	if (a + b > c)
	{
		if (b + c > a)
		{
			if (a + c > b)
			{
				printf("%f, %f, and %f form a triangle\n", a, b, c);
			}
			else
				printf("%f, %f, and %f don not form a triangle\n", a, b, c);
		}
		else
			printf("%f, %f, and %f don not form a triangle\n", a, b, c);
	}

	else
		printf("%f, %f, and %f don not form a triangle\n", a, b, c);
}