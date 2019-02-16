//-----------------------------------------------------------------------------
// Program: EX3_29: Guess the output I
// Programmer: Book Example
// Class: CsC_20 - C
// Date: 2/8/19
//
// My guess:
//
// ++++++++
// ****
// ++++++++
// ****
// ++++++++
// ****
// ++++++++
// ****
// ++++++++
// ****
//
// ----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
  // Initialize variables
  
  int count = 1; // loop counter

  while (count <= 10)
  {
    printf("%s\n", count % 2 ? "****": "++++++++");
    count++;
  }

  return 0;
}
