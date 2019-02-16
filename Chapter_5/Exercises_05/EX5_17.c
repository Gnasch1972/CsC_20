//-----------------------------------------------------------------------------
// Program:  Ex 5.17 - Multiples
// Programmer:  Joseph Cunningham
// Date:  11/2/15
//
// This program reads in two intgers and tells the user if the first is a
// multiple of the second.
//-----------------------------------------------------------------------------
#include<stdio.h>

int multiple(int x, int y);

int main(void)
{
	// Declare Varibale
	int num1, num2; // Integers input by the user
	int isMult;  // Return value from function 1 = is multiple 0 = not

	// Prompt user for data

	printf("Please enter two integers: ");
	scanf("%d %d", &num1, &num2);

	// Call function

	isMult = multiple(num1, num2);

	// Output results

	if (isMult == 1)
		printf("%d is a multiple of %d\n", num2, num1);
	else
		printf("%d is not a multiple of %d\n", num2, num1);

	return 0;
}

//-----------------------------------------------------------------------------
// Function: int multiple(int x, int y)
// Input:  Two intger values x and y
// Output: Integer vale - 1 if 2 is a multiple 0 is not
//-----------------------------------------------------------------------------
int multiple(int x, int y)
{
	if (y % x == 0)
		return 1;
	else
		return 0;
}