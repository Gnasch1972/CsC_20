//------------------------------------------------------------------------------
// Program: EX3_31.c - Dangling else
// Programmer: Joseph Cunningham
// Class: CsC_20 - c 
// Date: 2/11/19
//
// Output for a with x = 9 & y = 11
// 
// *****
// $$$$$
//
// Output for a with x = 11 & y = 9
// 
// $$$$$
//
// Output for b with x = 9 & y = 11
//
// *****
//
// Output for b with x = 11 & y = 9
//
// #####
// $$$$$
//
// ----------------------------------------------------------------------------


#include<stdio.h>

int main(void)
{
  // Part a where x = 9 & y = 11
  
  int x = 9;
  int y = 11;

  printf("EX3_31a: x = %d and y = %d\n", x, y);

  if (x < 10)
  if(y > 10)
  printf("*****\n");
  else
  printf("#####\n");
  printf("$$$$$\n");

  x = 11;
  y = 9;

  printf("EX3_31a: x = %d and y = %d\n", x, y);

  if (x < 10)
  if(y > 10)
  printf("*****\n");
  else
  printf("#####\n");
  printf("$$$$$\n");

  x = 9;
  y = 11;

  printf("EX3_31b: x = %d and y = %d\n", x, y);

  if (x < 10){
  if(y > 10)
  printf("*****\n");
  }
  else{
  printf("#####\n");
  printf("$$$$$\n");
  }

  x = 11;
  y = 9;

  printf("EX3_31b: x = %d and y = %d\n", x, y);

  if (x < 10){
  if(y > 10)
  printf("*****\n");
  }
  else{
  printf("#####\n");
  printf("$$$$$\n");
  }
  return 0;
}
