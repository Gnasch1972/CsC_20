//-----------------------------------------------------------------------------
// Program:  Ex 5.41 - Distance Between Points
// Programmer:  Joseph Cunningham
// Date: 10/23/15
//
// This program calculates and outputs the distance between user input 
// coordinate pairs
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<math.h>

double dist2Points(double x1, double y1, double x2, double y2);

int main(void)
{
	// Declare variables

	double x1, x2, y1, y2;  // Points entered by user
	double dist; // Calculated distance

	// Prompt user for points

	printf("Please enter first coordinate pair (x,y): ");
	scanf("%lf %lf", &x1, &y1);

	printf("Please enter second coordinate pair (x,y): ");
	scanf("%lf %lf", &x2, &y2);

	// Call function dist2Points

	dist = dist2Points(x1, y1, x2, y2);

	// Output data

	printf(" The distance between (%.2f, %.2f) and (%.2f, %.2f) = %.4f\n", x1, y1,
		x2, y2, dist);

	return 0;

}

//-----------------------------------------------------------------------------
// Function:double dist2Points(double x1, double y1, double x2, double y2)
// Input: 4 double values - 2 sets of coordinate pairs
// Output: double value = distance between pairs
//-----------------------------------------------------------------------------
double dist2Points(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}