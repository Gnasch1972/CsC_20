//-----------------------------------------------------------------------------
// Program:  Ex 4.28 - Calculating Weekly Pay
// Programmer:  Joseph Cunningham
// Date:  10/29/15
//
// This program caluclate the weekly pay for the following pay codes:
//			
//				1 - Managers - fixed pay
//				2 - Hourly workers - fixed hourly salary + time and half for all 
//											OT
//				3 - Commision workers - $250 + 5.7% of gross sales
//				4 - Pieceworkers - fixed salary per item worked
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables
	int payCode;  // Pay code for employees 1 - managers, 2 - hourly, 
					  // 3 - commmision, 4 - piecework
	float manWeekSalary;  // Managers fixed weekly salary
	float hourlyPay; // Hourly workers hourly pay
	int numHrsWorked;  // Number of hours work for hourly employees
	float regPay; // Calculated regular pay for hourly employees
	float oTPay = 0.0;  // Calculated OT pay for hourly employees
	float oTRate = 1.5; // Overtime rate is time and half
	float hourlyTotSalary;  // Total salary for hourly employee
	float commBasePay = 250.00; // Base pay for commision employee
	float commPer = 0.057; // Commision percentage
	float grossSales;  // Gross sales for commision employee
	float salComm;  // Total salary for commision employee
	float salPerItem;  // Salary per item for pieceworker
	int numWorked; // Number of items worked for pieceworker
	float salPiece; // Total salary for pieceworker

	// Prompt user for pay code
	printf("Pay codes:  1 - Manager 2 - Hourly 3 - Commision 4 - Pieceworker\n");
	printf("Please enter a pay code (-1 to exit): ");
	scanf("%d", &payCode);

	// Calculate salaries until user inputs -1
	while (payCode != -1)
	{
		switch (payCode)
		{
			// Manager salary
		case 1: 
			printf("\nPlease enter managers salary: ");
			scanf("%f", &manWeekSalary);

			// Output Managers salary
			printf("Manager's salary = $%.2f\n", manWeekSalary);

			break;

			// Hourly employee's salary
		case 2: 
			printf("Please enter hourly pay rate: ");
			scanf("%f", &hourlyPay);

			printf("Please enter number of hours worked: ");
			scanf("%d", &numHrsWorked);
			
			// Calculate regular pay

			if(numHrsWorked <= 40)
			hourlyTotSalary = hourlyPay * numHrsWorked;


			// Over time worked?
			if (numHrsWorked > 40)
			{
				regPay = hourlyPay * 40.0;
				oTPay = (numHrsWorked - 40.0) * (oTRate * hourlyPay);
				hourlyTotSalary = regPay + oTPay;
			}
			
			// Output hourly salary
			printf("Hourly employee's salary = $%.2f\n", hourlyTotSalary);
			break;

			// Commision eorkers salary
		case 3:
			printf("Please enter gross sales for the week: ");
			scanf("%f", &grossSales);

			// Calculate commision salary
			salComm = 250.00 + commPer * grossSales;

			// Output commision workers salary
			printf("Commision workers salary = $%.2f\n", salComm);
			break;

			// Piecewoker's salary
		case 4:
			printf("Please input salary per item: ");
			scanf("%f", &salPerItem);

			printf("Please enter number of items workerd: ");
			scanf("%d", &numWorked);

			salPiece = salPerItem * (float)numWorked;

			printf("Pieceworker's salary = %.2f\n", salPiece);

			break;

		default:
			printf("Not a valid pay code");
			break;
		}

		printf("Pay codes:  1 - Manager 2 - Hourly 3 - Commision 4 - Pieceworker\n");
		printf("Please enter a pay code (-1 to exit): ");
		scanf("%d", &payCode);

	}

	return 0;
}