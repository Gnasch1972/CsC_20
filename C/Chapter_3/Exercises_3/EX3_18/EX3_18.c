//-----------------------------------------------------------------------------
// Program: EX 3.18 - Credit Limit Calculator
// Programmer:  Joseph Cunningham
// Date:  10/2/15
//
// This program will prompt the user for an account number, beginning balance
// total monthly chargers, total monthly credits and a credit limit.  It will
// then calculate the new balance.  If the account has exceeded the limit, the
// program will print the account number, new balance, credit limit and that 
// the limit has been exceeded.  The program will continue until the user
// inputs the sentinel value of -1.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	// Variable declaration

	int acctNum;  // The customer's account number
	double beginBal;   // The customer's beginning balance
	double monthCharge;  // Total month's charges
	double monthCredit;  // Total month's credits
	double creditLim;  // Customer's credit limit
	double newBal;  // Calculated new balance

	// Prompt the user for the account number

	printf("Enter account number (-1 to end): ");
	scanf("%d", &acctNum);

	while (acctNum != -1)
	{
		// Prompt the user for the rest of the data

		printf("Enter beginning balance: ");
		scanf("%lf", &beginBal);

		printf("Enter total charges: ");
		scanf("%lf", &monthCharge);

		printf("Enter total credit: ");
		scanf("%lf", &monthCredit);

		printf("Enter credit limit: ");
		scanf("%lf", &creditLim);

		// Calculate the new balance

		newBal = beginBal + monthCharge - monthCredit;

		if (newBal > creditLim)
		{
			printf("Account:\t%d\n", acctNum);
			printf("Credit Limit:\t$%.2f\n", creditLim);
			printf("Balance:\t$%.2f\n", newBal);
			printf("CREDIT LIMIT EXCEEDED\n");
		}

		printf("\nEnter account number (-1 to end): ");
		scanf("%d", &acctNum);

	}

	return 0;
}
