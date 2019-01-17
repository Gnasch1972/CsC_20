/* Fig2_13.c: Testing decision operators */

#include<stdio.h>

int main(void)
{
  int num1; // First number for comparison
  int num2; // Second number for comparison

  // Prompt user for numbers
  
  printf("Enter two integers, and I will tell you\n");
  printf("the relationships they satisfy: ");

  scanf("%d%d", &num1, &num2);

  // Using if statements provide user with relationships
  
  if (num1 == num2){
    printf("%d is equal to %d\n", num1, num2);
  }

  if (num1 != num2){
    printf("%d is not equal to %d\n", num1, num2);
  }

  if (num1 < num2){
    printf("%d is less than %d\n", num1, num2);
  }

  if (num1 > num2){
    printf("%d is greater than %d\n", num1, num2);
  }

  if (num1 <= num2){
    printf("%d is less than or equal to %d\n", num1, num2);
  }

  if (num1 >= num2){
    printf("%d is greater than or equal to %d\n", num1, num2);
  }

  return 0;
}
