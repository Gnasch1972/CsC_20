//-----------------------------------------------------------------------------
// Program: EX3_32.c - Another Dangling Else Problem
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/11/19
//
// a).  Output with x = 5 and y = 8 and no changes
//
// @@@@@
// $$$$$
// &&&&&
//
// b). Output with x = 5 and y = 8 and braces around the else statement
//
// @@@@@
//
// c). Output with x = 5 and y = 8 and braces from else and around the first two
// printf statements
//
// @@@@@
// &&&&&
//
// d) Output with x = 5 and y = 7 and braces from else around the first printf
// statment
//
// @@@@@
// $$$$$
// &&&&&
// ----------------------------------------------------------------------------


#include<stdio.h>

int main(void)
{
  int x = 5;
  int y = 8;

  // Part A
  
  printf("a).  Output with x = %d and y = %d\n", x, y);

  if(y == 8)
    if(x == 5)
      printf("@@@@@\n");
    else
      printf("#####\n");
  printf("$$$$$\n");
  printf("&&&&&\n");

 // Part B 
  
  printf("\nb).  Output with x = %d and y = %d\n", x, y);

  if(y == 8)
    if(x == 5)
      printf("@@@@@\n");
  else{
  printf("#####\n");
  printf("$$$$$\n");
  printf("&&&&&\n");
  }

  // Part C 
  
  printf("\nc).  Output with x = %d and y = %d\n", x, y);

  if(y == 8)
    if(x == 5)
      printf("@@@@@\n");
  else{
  printf("#####\n");
  printf("$$$$$\n");}
  printf("&&&&&\n");
  
  // Part D
  
  y = 7;

  printf("\nd).  Output with x = %d and y = %d\n", x, y );

  if(y == 8){
    if(x == 5)
      printf("@@@@@\n");}
  else{
  printf("#####\n");
  printf("$$$$$\n");
  printf("&&&&&\n");
  }

  return 0;
}
