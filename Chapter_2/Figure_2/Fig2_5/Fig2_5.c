/* Fig2_5.c: Adding Two Integers */

#include<stdio.h>

int main(void)
{
  int integer1; // first number to be input by user
  int integer2; // second number to be input by user
  int sum; // the sum of integer1 & integer2

  printf("Enter first integer\n" );
  scanf("%d", &integer1);

  printf("Enter second integer\n" );
  scanf("%d", &integer2);

  // Add the 2 integers and output the sum
  
  sum = integer1 + integer2;

  printf("Sum is %d\n", sum);

  return 0;

}
