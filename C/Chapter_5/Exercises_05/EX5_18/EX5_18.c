//-----------------------------------------------------------------------------
// Program: EX5_18.c - Evem or Odd
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program prompts the user for several values one at a time and determines
// if those intgers are even or odd and displays that answer.
// ----------------------------------------------------------------------------


#include<stdio.h>

int even( int number); // Function prototype

int main (void)
{
  // Varibale declarations
  int i; // loop counter
  int number; // User entered integer

  // Determining even / odd
  
  for(i = 1; i <= 5; i++)
  {
    // Prompt user for number
    
    printf("Please enter an intger: ");
    scanf("%d", &number);

    // Even or odd
    
    if(even(number) == 1 )
      printf("%d is even\n", number);

    else
      printf("%d is odd\n", number);

  }

  return 0;
}

//-----------------------------------------------------------------------------
// Function: even(x) - determines if x is even
// Input: int x -
// Output: int 1 = even, 0 = odd
// ----------------------------------------------------------------------------

int even(int x)
{
  if(x % 2 == 0)
    return 1;
  else
    return 0;
}
