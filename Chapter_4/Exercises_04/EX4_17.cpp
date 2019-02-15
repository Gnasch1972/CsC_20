//-----------------------------------------------------------------------------
// Program: Ex 4.17 - Calculating Credit Limits
// Programmer:  Joseph Cunningham
// Date: 10/28/15
//
// This program calculates a customers new credit limit.  It prints a warning 
// if a customer is now over the credit limit.
//
// Input: Customers account number, credit limit before recession, and the 
//		    current balance
// Output:  New credit limit.  If their balance exceeds new credit limit
//				print a warning.
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables
	int i = 1;  // while loop variable
	int acctNum; // Customer account number
	float beforeCL;  // Customer current credit limit
	float currBal;  // Customer current balance
	float newCL; // Customers new credit balance

	while (i <= 3)
	{
		// Prompt user for customer data
		printf("Enter account number: ");
		scanf("%d", &acctNum);

		printf("Enter customer's current credit limit: ");
		scanf("%f", &beforeCL);

		printf("Enter customer's current balance: ");
		scanf("%f", &currBal);

		// Calculate new credit limit
		newCL = beforeCL / 2.0;

		// Output new credit limit and warn if customer is over
		printf("New Credit Limit = $%.2f\n", newCL);

		// If the customer is over the new limit output a warning
		if (currBal > newCL)
			printf("CUSTOMER IS OVER THEIR LIMIT!\n");

		// Increment i
		++i;
		printf("\n");
	}

	return 0;
}