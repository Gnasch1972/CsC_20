//-----------------------------------------------------------------------------
// Program:  Ex 3.49 - Enforcing Privacy with Cryptography
// Programmer: Joseph Cunningham
// Date:  10/25/15
//
// This proram encrypts a 4 digit intgers input by the user.  It also will
// decrypt a digit input by the user
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Declare variables
	int number;  // Digit to be encrypted input by user
	int temp; // Temporary storage used throughout program
	int d1, d2, d3, d4;  // Individual digits of number
	int enDigit;  // Encrypted digit

	// Prompt user for number to be encrypted
	printf("Please enter an integer to be encrypted: ");
	scanf("%d", &number);

	// Store number in temp for encryption

	temp = number;

	// Split number into individual number

	d1 = temp / 1000;
	temp %= 1000;

	d2 = temp / 100;
	temp %= 100;

	d3 = temp / 10;

	d4 = temp % 10;

	// Add 7 and modulo 10 for each digit

	d1 = (d1 + 7) % 10;
	d2 = (d2 + 7) % 10;
	d3 = (d3 + 7) % 10;
	d4 = (d4 + 7) % 10;

	// Swap digits 1 & 3

	temp = d1;
	d1 = d3;
	d3 = temp;

	// Swap digits 2 & 4

	temp = d2;
	d2 = d4;
	d4 = temp;

	// Output encrypted digit

	enDigit = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

	printf("Encrypted digit = %d%d%d%d\n", d1, d2, d3, d4);

	// Unencrypt

	// Prompt user for number to be encrypted
	printf("Please enter an integer to be encrypted: ");
	scanf("%d", &number);

	// Store number in temp for encryption

	temp = number;

	// Split number into individual number

	d1 = temp / 1000;
	temp %= 1000;

	d2 = temp / 100;
	temp %= 100;

	d3 = temp / 10;

	d4 = temp % 10;

	// Subtract 7 and add 10 and modulo 10 for each digit

	d1 = (d1 - 7 + 10) % 10;
	d2 = (d2 - 7 + 10) % 10;
	d3 = (d3 - 7 + 10) % 10;
	d4 = (d4 - 7 + 10) % 10;

	// Swap digits 1 & 3

	temp = d1;
	d1 = d3;
	d3 = temp;

	// Swap digits 2 & 4

	temp = d2;
	d2 = d4;
	d4 = temp;

	// Output encrypted digit

	enDigit = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

	printf("Unencrypted digit = %d%d%d%d\n", d1, d2, d3, d4);

	return 0;
}