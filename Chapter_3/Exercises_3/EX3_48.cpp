//-----------------------------------------------------------------------------
// Program:  Ex 3.48 - Target-Heart Rate Calculator
// Programmer:  Joseph Cunningham
// Date: 10/28/15
//
// This program calculates a persons age, maximum heart rate and a range of 
// heart rates for exercise.  The user enters their birth date and the current
// date.
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{

	// Declare Variables

	int bDMonth, bDDay, bDYear;  // User entered birthday day, MM/DD/YYYY
	int cDMonth, cDDay, cDYear; // User entered current date, MM/DD/YYYY
	int age;  // Calculated age
	int mHR; // Maximum heart rate for their age (220 - age)
	float tHRL;  // Target heart rate low (mHR * 0.50)
	float tHRH;  // Target heart rate high (mHR * 0.85)

	// Prompt user for dates

	printf("Please enter your birthday date (MM DD YYYY): ");
	scanf("%d %d %d", &bDMonth, &bDDay, &bDYear);

	printf("Please enter the current date (MM DD YYYY): ");
	scanf("%d %d %d", &cDMonth, &cDDay, &cDYear);

	// Calculate age

	if (cDMonth >= bDMonth && cDDay >= bDDay)
		age = cDYear - bDYear;

	else
		age = (cDYear - bDYear) - 1;

	// Calculate maximum heart rate
	mHR = 220 - age;

	// Calculate target heart rates

	tHRL = .5 * mHR;
	tHRH = 0.85 * mHR;

	// Output data

	printf("Age: %d\n", age);
	printf("Maximum Heart Rate: %d\n", mHR);
	printf("Target Heart Rate: %.2f - %.2f\n", tHRL, tHRH);

	return 0;

}