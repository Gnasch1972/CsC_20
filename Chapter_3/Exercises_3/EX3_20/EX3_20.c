//-----------------------------------------------------------------------------
// Program: EX 3.20 - Interest Calculator
// Programmer:  Joseph Cunningham
// Class: CsC_20 - C
// Date: 10/2/15
//
// This program will prompt the user for the loan principle, the annual per-
// centage rate and the term of the load.  It will then calculate the interest
// charge and output it.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	// Variable declaration
	
	double principle;  // Loan principle
	double aPR;  // Annual percentage rate
	int days;  // Term of the loan
	double charge; // Calculated interest charge

	// Prompt the user for the principle

	printf("Enter the loan principle (-1 to end): ");
	scanf("%lf", &principle);

	while ((int)principle != -1)
	{

		printf("Enter the interest rate: ");
		scanf("%lf", &aPR);

		printf("Enter the term of the loan in days: ");
		scanf("%d", &days);

		// Calculate the interest charge

		charge = principle * aPR * days / 365;

		// Output the interest

		printf("The interest charge is $%.2f", charge);

		// Prompt the user for the next laon

		printf("\n\nEnter the loan principle (-1 to end): ");
		scanf("%lf", &principle);
	}

	return 0;
}
