//-----------------------------------------------------------------------------
// Program: EX 4.19 - Calculating Sales
// Programmer:  Joseph Cunningham
// Date 10/8/15
//
// This program will prompt the user for a product number and quatity of that
// product sold.  The prices are as follows:
//
//				Product Number				Retail Price
//        ----------------------------------------
//						1							$2.98
//						2							$4.50
//						3							$9.98
//						4							$4.49
//						5							$6.87
//
// It will then output the total value sold
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	// Variable declaration 

	int prodNum;  // User entered product number
	int quantSold; // User entered quantity sold
	int i = 1;  // While loop control
	float total = 0;  // Total value of goods sold

	// Prompt user for the data

	printf("Please enter the product number (-1 to end)");
	scanf("%d", &prodNum);

	if (prodNum == -1)
	{
		printf("\nNo data entered\n");
		return 0;
	}

	printf("Please enter the quantity sold: ");
	scanf("%d", &quantSold);

	// Calculate total
	
	while (prodNum != -1)
	{
		switch (prodNum)
		{
		case 1:
			total += (float)quantSold * 2.98;
			break;

		case 2: 
			total += (float)quantSold * 4.5;
			break;

		case 3: 
			total += (float)quantSold * 9.98;
			break;

		case 4: 
			total += (float)quantSold * 4.49;
			break;

		case 5:
			total += (float)quantSold * 6.87;
			break;

		default:
			total += 0.0;
			break;
		}

		printf("Please enter the product number (-1 to end)");
		scanf("%d", &prodNum);

		if (prodNum == -1)
		{
			break;
		}

		printf("Please enter the quantity sold: ");
		scanf("%d", &quantSold);


	}

	printf("\nThe total of goods sold: $%.2f\n", total);

	return 0;
}