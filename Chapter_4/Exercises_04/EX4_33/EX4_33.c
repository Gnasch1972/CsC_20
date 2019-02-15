//-----------------------------------------------------------------------------
// Program:  Ex 4.33 - Roman Numeral Equivalent of Decimal Numbers
// Programmer:  Joseph Cunningham
// Date: 11/1/15
//
// This program prints a table of Roman Numberals from 1 - 100
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables

	int n = 1;  // Counter and number to be converted
	int temp;  // Placeholder
	int i;  // For loop counter

	// Print table header
	printf("Decimal\tRoman\n");

	while (n <= 100)
	{
		// Print Number
		printf("%d\t", n);

		// Store number for computation
		temp = n;

		// If number is 100

		if (temp == 100)
		{
			printf("C");
			temp -= 100;
		}

		// If the number is between 100 and 90
		else if (temp < 100 && temp >= 90)
		{
			printf("XC");
			temp %= 10;
		}

		// If the number is between 50 and 90
		else if (temp < 90 && temp >= 50)
		{
			printf("L");

			if(temp <= 80 && temp >= 60 )
			for (i = temp/10 - 5; i >= 1; --i)
				printf("X");
			temp %= 10;
		}

		// If the number is between 40 and 50
		else if (temp < 50 && temp >= 40)
		{
			printf("XL");
			temp %= 10;
		}

		// If the number is between 10 and 40
		else if (temp < 40 && temp >= 10)
		{
			printf("X");

			if (temp <= 30  && temp >= 20)
				for (i = temp / 10 - 1; i >= 1; --i)
					printf("X");
			temp %= 10;
		}


		switch (temp)
		{
		case 9:
			printf("IX\n");
			break;
		case 8:
			printf("VIII\n");
			break;
		case 7:
			printf("VII\n");
			break;
		case 6:
			printf("VI\n");
			break;
		case 5:
			printf("V\n");
			break;
		case 4:
			printf("IV\n");
			break;
		case 3:
			printf("III\n");
			break;
		case 2:
			printf("II\n");
			break;
		case 1:
			printf("I\n");
			break;
		case 0:
			printf("\n");
			break;
		}
		n++;
	}

	return 0;

}