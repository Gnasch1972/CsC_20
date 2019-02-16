//-----------------------------------------------------------------------------
// Program:  Ex 5.23 - Time in Seconds
// Programmer: Joseph Cunningham
// Date: 11/2/15
//
// This program read in two sets of 3 values representing a time in hours, 
// minutes, and seconds.  It then calculates the difference between them in 
// seconds
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<math.h>

int timeInSec(int hrs, int min, int sec);

int main(void)
{
	// Declare variables
	int hours, minutes, seconds; // Time values entered by the user
	int time1, time2; // Return values from the function in seconds
	int diffTime;  // Difference between the two times

	
	// Prompt user for data
	printf("Please enter a time in hours minutes seconds: ");
	scanf("%d %d %d", &hours, &minutes, &seconds);

	// Call function to calculate seconds
	time1 = timeInSec(hours, minutes, seconds);

	// Prompt user for data
	printf("Please enter a time in hours minutes seconds: ");
	scanf("%d %d %d", &hours, &minutes, &seconds);

	// Call function to calculate seconds
	time2 = timeInSec(hours, minutes, seconds);

	diffTime = abs(time1 - time2);

	// Output the difference
	printf("The time difference in seconds is %d\n", diffTime);
}

//-------------------------------------------------------------------
// Function: int timeInSec(int hrs, int min, int sec)
// Input: 3 int values - hours, minutes and seconds
// Output: 1 int value - time in seconds
//-----------------------------------------------------------------------------
int timeInSec(int hrs, int min, int sec)
{
	return sec + min * 60 + hrs * 3600;
}