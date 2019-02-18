//-----------------------------------------------------------------------------
// Program: EX5_23.c - Time in Seconds
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/17/19
//
// This program will read in a time in hours, minutes and seconds.  It will
// output the time in seconds that have elapsed since the last time the clock
// struck 12.
//-----------------------------------------------------------------------------

#include<stdio.h>

int timeInSeconds(int hours, int minutes, int seconds);

int main (void)
{
  // Variable declaration
  
  int hours, minutes, seconds; // User input
  
  // Prompt user for data
  
  printf("Please enter a time in HMS: ");
  scanf("%d%d%d", &hours, &minutes, &seconds);

  // Output the seconds
  
  printf("It has been %d seconds since the last time the clock struck 12", timeInSeconds(hours, minutes, seconds));

  return 0;
}

//-----------------------------------------------------------------------------
// Function: timeInSeconds(hours, minutes, seconds) - calculates the number of
// seconds since the last time the clock struck 12
// Input - 3 integers representing hours, minutes, seconds
// Output - none
// Return - seconds
// ----------------------------------------------------------------------------

int timeInSeconds(int hours, int minutes, int seconds)
{
  int totSeconds;

  totSeconds = seconds + minutes * 60 + hours * 3600;

  return totSeconds;
}
