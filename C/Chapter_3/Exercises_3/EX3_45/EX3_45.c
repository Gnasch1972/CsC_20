//-----------------------------------------------------------------------------
// Program:  Ex 3.45 - Sides of a Right Triangle
// Programmer:  Joseph Cunningham
// Date: 10/27/15
//
// This program reads in 3 nonzero integers from the user.  It detemines 
// via the Pythogorean Theorm if the sides form a right triangle
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{

	// Declare variables
	
	int a, b, c;

	// Prompt user for sides

	printf("Please input 3 nonzero integers:  ");
	scanf("%d %d %d", &a, &b, &c);

	// Determine if the integers entered from a right triangle

	if (a*a + b*b == c*c)
		printf("%d, %d and %d form a right triangle.\n", a, b, c);

	else
		printf("%d, %d and %d do not form a right triangle.\n", a, b, c);

	return 0;
}