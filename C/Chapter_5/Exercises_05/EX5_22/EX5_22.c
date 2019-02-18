//-----------------------------------------------------------------------------
// Program: EX5_22.c - Separating Digits
// Programmer:  Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program will prompt the user for a number from 1 - 32767.  It will then
// output that number separated into its constituent digits with 2 spaces
// between each digit
//-----------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>

int getNumLength(int number);
void separate(int number, int power); // Fucntion prototype

int main (void)
{
  // Variable declaration
  
  int number; // User entered number to digitize
  int power;  // Power to generate divisor

  // Prompt user for number
  
  printf("Please input a number (1-32767): ");
  scanf("%d", &number);

  // Get the power for the divisor
  
  power = getNumLength(number);

  // Output digits
  
  separate(number, power);

  return 0;
}

//-----------------------------------------------------------------------------
// Function: getPower(number) - counts the number of digits in the number to
// generate a power
// Input:  int number - the user entered number
// Output: none
// Return value - length of thr number
//-----------------------------------------------------------------------------

int getNumLength(int number)
{
  int length; // the length of number

  while (number != 0)
  {
    number = number / 10;
    length++;
  }

  return length;
}

//-----------------------------------------------------------------------------
// Function: separate(number) - separates and displays an integer between 1
// -32767 into its digits
// Input: int number - intger betwenn 1 - 32767, int power - power for divisor
// Output: numbers digits separated by 2 spaces
// Return value: none
//-----------------------------------------------------------------------------

void separate(int number, int power)
{
  int divisor; // the divisor from power
  int i;  // loop counter

  for(i = power - 1; i >=0; i--)
  {
    divisor = (int)pow(10, i);
    printf("%d  ", number / divisor);
    number = number % divisor;
  }
}
