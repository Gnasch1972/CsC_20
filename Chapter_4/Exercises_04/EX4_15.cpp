//-----------------------------------------------------------------------------
// Program: EX 4.15 - Modified Compound Interest Program
// Programmer: Joseph Cunninham

#include<stdio.h>
#include<math.h>

// Function main begins programm execution

int main(void)
{
	double amount;  // Amount on deposit
	double principal = 1000.0;  // starting priciple
	double rate = 0.05;  // annual interest rate
	int year;  // year counter
	int i = 5; // while loop counter

				  

	while (i <= 10)
	{
		printf("For interest rate = %d%%\n", i);
		printf("%4s%21s\n", "Year", "Amount on Deposit");

		// Calculate the amount on deposit for each of the ten years

		for (year = 1; year <= 10; year++)
		{
			// Calculate new amount for specified year

			amount = principal * pow(1.0 + rate, year);

			// Output one table row

			printf("%4d%21.2f\n", year, amount);

			
		}
		rate = rate + 0.01;
		i++;
	}
		return 0;
}