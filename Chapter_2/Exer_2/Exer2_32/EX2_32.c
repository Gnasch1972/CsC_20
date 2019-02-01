//-----------------------------------------------------------------------------
// Program: EX2_32 Body Mass Index Calculator
// Programmer: Joseph Cunningham
// Class: CsC_20 - C
// Date: 1/31/19
//
// This program prompts the user for their height (inches) and weight (lbs).  It
// calculated their BMI with the following formula:
//
//                BMI = (weight * 703) / (height * height)
//
// It outputs the users BMI and the following chart:
//
// BMI VALUES:
// Underweight:     less than 18.5
// Normal:          between 18.5 & 24.9
// Overweight:      between 25 & 29.9
// Obese:           30 or greater
// ----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

  // Declare variables
  
  int weight, height;  // User input
  int bMI;  // calculated body mass index

  // Get input from user
  
  printf("Please enter your height (inches) and weight (lbs):");
  scanf("%d%d", &height, &weight);

  // Calculate BMI
  
  bMI = (weight * 703) / (height * height);

  // Output results
  
  printf("Your BMI = %d\n", bMI);
  printf("BMI VALUES\n");
  printf("Underweight:      less than 18.5\n");
  printf("Normal:           between 18.5 and 24.9\n");
  printf("Overweight:       between 25 and 29.9\n");
  printf("Obese:            30 or greater\n");

  return 0;

}
