//-----------------------------------------------------------------------------
// Program:  Ex 5.30 - Student Average
// Programmer:  Joseph Cunningham
// Date: 11/2/15
//
// This program takes a user input of a students average and returns a number.
//						100 - 90 = 4
//						 80 - 89 = 3
//						 70 - 79 = 2
//						 60 - 69 = 1
//						  0 - 59 = 0
//-----------------------------------------------------------------------------
#include<stdio.h>

int qualityPoints(int ave);

int main(void)
{
	// Declare variable
	int studentAve; //  Student average input by user


	// Prompt user for student average
	printf("Please enter a student average: ");
	scanf("%d", &studentAve);

	// Output the quality point

	printf("For the average of %d quality points = %d\n", studentAve,
		qualityPoints(studentAve));

	return 0;

}

//-----------------------------------------------------------------------------
// Function: int qualityPoints(int ave)
// Input: int value student average
// Output: int value qualtiy point 4 = A, 3 = B, 2 = C, 1 = D, 0 = F
//-----------------------------------------------------------------------------
int qualityPoints(int ave)
{
	if (ave >= 90)
		return 4;

	else if (ave >= 80)
		return 3;

	else if (ave >= 70)
		return 2;

	else if (ave >= 60)
		return 1;
	else
		return 0;
}