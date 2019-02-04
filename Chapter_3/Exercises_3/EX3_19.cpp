//-----------------------------------------------------------------------------
// Program: EX3_19 - Sales Commission Calculator
// Programmer:  Joseph Cunningham
// Date: 10/2/15
//
//  This program will prompt the user for the employee's gross sales for the
//  week.  It will then calculate and print their salary for the week.  The
//  program will continue to process salary's until the sentinel value is 
//  entered.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	// Variable declaration

	double weekSales;  // Employee's sales for the week
	double salary = 200.00;  // Employee's weekly salary
	double perCommish = 0.09;  // Commission percentage
	double totSalary;  //  Employee's calculate salary

	// Prompt user for weekly gross sales

	printf("Enter sales in dollars (-1 to end): ");
	scanf("%lf", &weekSales);

	while ((int)weekSales != -1)
	{

		// Calculate salary

		totSalary = salary + perCommish * weekSales;

		// Output salary

		printf("Salary is $%.2f", totSalary);

		// Prompt user for weekly gross sales

		printf("\n\nEnter sales in dollars (-1 to end): ");
		scanf("%lf", &weekSales);
	}

	return 0;
}