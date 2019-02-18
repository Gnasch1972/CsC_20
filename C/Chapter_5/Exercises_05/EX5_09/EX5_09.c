//-----------------------------------------------------------------------------
// Program: EX5_09.c - Parking Charges
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/16/19
//
// This program promots the user for the hours parked for 3 care.  It calculated
// the parking fee for each according to the following:
//
//          1-3 hours: $2.00
//          3-18 hours - $0.50 per hour or part thereof
//          max parking charge: $10
//
//  It will output the time per car and the chage accured for that car.  It will
//  also out put a final total of hours and charges for the day.
//-----------------------------------------------------------------------------


#include<stdio.h>
#include<math.h>

float calculateCharges( float hours); // function prototype


int main (void)
{
  // Initialize variables
 
  int i; // For loop counter
  float  one, two, three;  // Car numbers
  float hours; // user input for hours parked 
  float sumCharges;  // the sum of parking charges
  float sumHours; // the sum of hours parked

  // Prompt user for hours parked
  
  for(i = 1; i <= 3; i++)
  {
    printf("Please enter hours parked: ");
    scanf("%f", &hours);

    if(i == 1)
      one = hours;
    else if(i == 2)
      two = hours;
    else
      three = hours;
  }

  // Calculate the total hours and chagers
  
  sumHours = one + two + three;
  sumCharges  = calculateCharges(one) + calculateCharges(two) + calculateCharges (three);

  // Output data
  
  printf("%5s%15s%15s\n","Car", "Hours", "Charge");
  printf("%5d%15.1f%15.2f\n", 1, one, calculateCharges(one));
  printf("%5d%15.1f%15.2f\n", 2, two, calculateCharges(two));
  printf("%5d%15.1f%15.2f\n", 3, three, calculateCharges(three));
  printf("%5d%15.1f%15.2f\n", 1, sumHours, sumCharges);

  return 0;
}

//-----------------------------------------------------------------------------
// Function: calculateCharges
// Input: float hours - number of hours parked
// Outpui:  charge for hours parked
// ----------------------------------------------------------------------------

float calculateCharges(float hours)
{
  if ((int)hours <= 3) 
    return 2.0;

  else if((int)hours > 3 && (int)hours <= 18)
    return 2 +(hours-3) * 0.5;

  else
    return 10;

}
