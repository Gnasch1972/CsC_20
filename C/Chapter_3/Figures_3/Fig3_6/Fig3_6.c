// Fig 3.6:  Fig3_6.cpp
// Class average program with counter-controlled repition

#include <stdio.h>

// Function main begins program execution

int main(void)
{
	unsigned int counter; // number of grade to be entered next
	int grade;  // grade value
	int total; // sum of grades entered by user
	int average; // average of grades

	// initialization phase

	total = 0; // intialize total
	counter = 1; //initialize loop counter

	// Processing phase
	while (counter <= 10)  // loop 10 times
	{
		printf("%s", "Enter grade : ");  // prompt user for grade
		scanf("%d", &grade);  // read grade from user
		total = total + grade; //add grade total
		counter = counter + 1; // increment counter
	}  // End while

	// Termination phase

	average = total / 10;  // integer division

	printf("Class aveage is %d\n", average); // display result

	return 0;
}