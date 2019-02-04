//-----------------------------------------------------------------------------
// Program: EX 3.42 - Diameter, Circumference and Area of a Circle
// Programmer:  Joseph Cunningham
// Date: 10/5/15
//
// This program will prompt a user for a radius of a circle.  It will then
// calculate the diameter, circumference, and the are.  It will print them 
// out.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
	float radius;  // Radius input by the user
	float pi = 3.14159;  // Pi
	float diameter;  // Calculated diameter
	float circum; // Circumference
	float area; // area

	// Prompt the user for the radius

	printf("Please input a radius: ");
	scanf("%f", &radius);

	// Calculate the ares, circumference, and diameter

	diameter = 2 * radius;
	circum = 2 * pi * radius;
	area = pi * radius * radius;

	// Print the values

	printf("For a circle with radius %.4f\n", radius);
	printf("-------------------------------\n");
	printf("Diameter =             \t%.4f\n", diameter);
	printf("Circumferece =         \t%.4f\n", circum);
	printf("Area =                 \t%.4f\n", area);

	return 0;
}