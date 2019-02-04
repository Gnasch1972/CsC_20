//-----------------------------------------------------------------------------
// Program: EX 3.21 - Salary Calculator
// Programmer: Joseph Cunningham
// Data: 10/2/15
//
//  This program calculates the weekly salary for employees.  It prompts the 
//  the user for the number of hours worked and the hourly wage.  If the 
//  number of hours is 40 or less standard pay is calculated.  If the number
//  of hours is greater than 40 the program will calculate standard + time 
//  and half.  The salary will then be output.  It will continue to calculate
//  salaries until the sentinel value is input
//-----------------------------------------------------------------------------

#include <stdio.h>

int main(void)
{
	// Variable declaration

	int hours;  // Number of hours worked
	double hourlyWage; // Hourly wage of employee
	double salary;  // Total salary of employee
	double perOT = 1.5;  // Overtime percentage

	// Prompt user for hours

	printf("Enter the number of hours worked (-1 to end): ");
	scanf("%d", &hours);

	while (hours != -1)
	{

		// Prompt user for the hourly wage

		printf("Enter the hourly rate of the worker ($00.00): ");
		scanf("%lf", &hourlyWage);

		if (hours <= 40)
		{
			salary = hours * hourlyWage;
			printf("Salary is $%.2f", salary);
		}

		else
		{
			salary = 40 * hourlyWage;
			salary = salary + ((hours - 40) * perOT) * hourlyWage;
			printf("Salary is $%.2f", salary);
		}

		printf("\n\nEnter the number of hours worked (-1 to end): ");
		scanf("%d", &hours);
	}

}