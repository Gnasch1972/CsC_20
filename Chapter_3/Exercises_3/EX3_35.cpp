//-----------------------------------------------------------------------------
// Program:  EX3.35 - Palindrome Tester
// Programmer:  Joseph Cunningham
// Date: 10/5/15
//
// This program will read in a 5 digit number.  It will then determine if it is
// a palindrome.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	int number; // Number input by the user
	int remainder; // Remainder 
	int sum = 0;  // The other number
	int temp;  // temp number

	printf("Input a 5 digit integer: ");
	scanf("%d", &number);

	temp = number;

	
	while (temp > 0)
	{
		remainder = temp % 10;
		//printf("remainder = %d\n", remainder);
		sum = sum * 10 + remainder;
		//printf("sum = %d\n", sum);
		temp = temp / 10;
		//printf("temp = %d\n", temp);
	}

	
	if (sum == number)
	{
		printf("%d is a palindrome\n", number);
	}

	else
		printf("%d is not a palindrome\n", number);

	return 0;

}