//-----------------------------------------------------------------------------
// Program: EX 3.17 - Gas Milage
// Programmer: Joseph Cunningham
// Date 10/2/15
//
//  This program will ask the user for car travel data until the value -1 is 
//  entered.  It will prompt the user for gallons used and miles driven.  It
//  will then calculate the miles per gallon.  After all the data has been 
//  entered it will calculate the average miles per gallon.  If no data was
//  entered the program will say so.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
	// Variable declaration and iniialization

	double gallonsUsed;  // User input gallons used for 1 trip
	double milesDriven;  // User input miles driven on 1 tank
	double mPH;  // Calculated miles per gallon for 1 trip
	double totMPH = 0; // Total of the calculated MPH
	int count = 0; // Counter for number of times through loop

	//  Ask for input

	printf("Enter the gallons used (-1 to exit): ");
	scanf("%lf", &gallonsUsed);

	// Calculate the data

	while ((int)gallonsUsed != -1)
	{
		printf("Enter miles driven: ");
		scanf("%lf", &milesDriven);

		++count;  // Update the count

		// Calculate the miles per gallon for 1 trip

		mPH = milesDriven / gallonsUsed;

		// Output miles per gallon

		printf("\nThe miles per gallon for this tank was %f\n", mPH);

		// Update total 

		totMPH += mPH;

		printf("\nEnter the gallons used (-1 to exit): ");
		scanf("%lf", &gallonsUsed);

	}

	if (count != 0)
	{
		printf("\nThe overall miles per gallon is %f\n", totMPH / count);
	}

	else
	{
		printf("No data enterd\n");
	}

	return 0;
}
