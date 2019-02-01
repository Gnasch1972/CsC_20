//-----------------------------------------------------------------------------
// Program: EX2_33.c Car-Pool Savings Calculator
// Programmer:  Joseph Cunningham
// Class: CsC_20 - C
// Date: 1/31/19
//
// This program prompts the user for the following
//
//    Total miles driven per day
//    Cost per gallon of gas
//    Average MPG
//    Parking Fees
//    Tolls
//
// It outputs the total cost of the driver per day.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main (void)
{

  // Variable Declaration
  
  int totalMilesPerDay;  // User input
  int costPerGallon;    // User input
  int aveMilesPerGallon; // User input
  int parking;  // User input 
  int tolls;  // User input

  int driveCost;  // Cost of the drive
  int totalCost;  // Total cost of the day

  // Prompt user for input
  
  printf("Please total miles driven per day: ");
  scanf("%d", &totalMilesPerDay);

  printf("Please enter the cost per gallon: ");
  scanf("%d", &costPerGallon);

  printf("Please your vehicle MPG: ");
  scanf("%d", &aveMilesPerGallon);

  printf("Please enter parking fees: ");
  scanf("%d", &parking);

  printf("Please enter any tolls: ");
  scanf("%d", &tolls);

  // Calculate the total cost
  
  // printf("part1 = $%d\n",totalMilesPerDay / aveMilesPerGallon);
  driveCost = (totalMilesPerDay / aveMilesPerGallon) * costPerGallon;
  //printf("Drive Cost =$%d\n", driveCost);

  totalCost = driveCost + parking + tolls;

  // Output the total cost
  
  printf("Total cost of the driver: $%d\n", totalCost);

  return 0;
}
