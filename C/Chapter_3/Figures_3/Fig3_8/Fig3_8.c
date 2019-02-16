// Fig 3.8:  Fig3_8.cpp
// Class average program with senitnel - controlled repitition

#include <stdio.h>

// Function main begins program execution

int main(void)
{
	int counter;  // number of grades entered
	int grade; // grade value
	int total;  // sum of grades

	float average; // number for decimal point average

	// Intialization phase

	total = 0; // intialize total
	counter = 0; // intialize counter

	// processing phase

	printf("Enter grade (-1 to end): ");  // prompt for input
	scanf("%d", &grade);  // read grade from user

	// loop while sentinel value not read from user

	while (grade != -1)
	{
		total = total + grade;  // add grade to total
		counter = counter + 1;  // increment counter

		// Get next grade from user

		printf("Enter grade (-1 to end): ");  // prompt for input
		scanf("%d", &grade);  // read grade from user
	}

	// Termination phase

	if (counter != 0)
	{
		// calculate the average

		average = (float)total / counter;  // avoid trucation

		// Display average with 2 digits of precision

		printf("Class average is %.2f\n", average);
	}

	// If no grades were entered display message

	else
	{
		printf("No grades were entered\n");
	}

	return 0;
}
