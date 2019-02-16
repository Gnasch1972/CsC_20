//-----------------------------------------------------------------------------
// Program:  EX 4.18 - Bar Chart Printing Program
// Programmer: Joseph Cunningham
// Date: 10/8/15
//
// This program will prompt the user for 5 integers.  It will then create a
// bar chart with as many astrisks as the integer
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;  // User input numbers
	int j; // Loop variables

					  // Prompt user for input

	printf("Please enter an integer between 1 -30: ");
	scanf("%d", &num1);
	printf("Please enter an integer between 1 -30: ");
	scanf("%d", &num2);
	printf("Please enter an integer between 1 -30: ");
	scanf("%d", &num3);
	printf("Please enter an integer between 1 -30: ");
	scanf("%d", &num4);
	printf("Please enter an integer between 1 -30: ");
	scanf("%d", &num5);

	// Output the bar graph

	printf("%d ", num1);
	if (num1 < 10)
		printf(" ");
	for (j = 1; j <= num1; j++)
	{
		printf("*");
	}
	printf("\n");

	printf("%d ", num2);
	if (num2 < 10)
		printf(" ");
	for (j = 1; j <= num2; j++)
		printf("*");
	printf("\n");

	printf("%d ", num3);
	if (num3 < 10)
		printf(" ");
	for (j = 1; j <= num3; j++)
		printf("*");
	printf("\n");

	printf("%d ", num4);
	if (num4 < 10)
		printf(" ");
	for (j = 1; j <= num4; j++)
		printf("*");
	printf("\n");

	printf("%d ", num5);
	if (num5 < 10)
		printf(" ");
	for (j = 1; j <= num5; j++)
		printf("*");
	printf("\n");

	return 0;
}
