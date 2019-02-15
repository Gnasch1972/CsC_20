//-----------------------------------------------------------------------------
// Program: EX. 4.23: Calculating the Coumpound Interest with Intgers
// Programmer:  Joseph Cunningham
// Date:  10/10/15
// Modify Fig. 4.6 using integers instead
// of double variable to calculate compound interest
//-----------------------------------------------------------------------------

#include <stdio.h>


int main()
{
	int year, amount = 2, rate = 5, digits, deci, expo;

	printf("%4s%21s\n", "Year", "Amount on deposit");

	rate += 100;   // 1.05 taken as 105 in integer

						// calculate compound interest for a duration of 10 years
	for (year = 1; year <= 10; year++)
	{
		// find the power of rate, using expo as exponential value
		for (expo = year; expo >= 1; expo--)
		{
			amount *= rate;

			//reduce the value of power to a six digit number
			while (amount >= 999999)
			{
				amount /= 10;
			}
		}

		/* while the value of power is less than 6 digits,
		multiply by 10 till it's a six digits number */
		while (amount <= 100000)
			amount *= 10;

		digits = amount / 100;   // break amount into dollar portion
		deci = amount % 100;     // break amount into cents portion

										 // if the decimal is not a two digit figure, concatenate with a zero
		if (deci <= 10)
			printf("%4d%18d.0%d\n", year, digits, deci);
		else
			printf("%4d%18d.%d\n", year, digits, deci);

		amount = 2;  // reinitialize power to 1 to use again
	}

	return 0;
}