// Fig 3.10: fig3_10.cpp
// Analysis of examination results.  

#include<stdio.h>

// Function main begins programm execution

int main(void)
{
	// Initialize variables and definitions

	int passes = 0; // number of passes
	int failures = 0; // number of failures
	int student = 1;  // student counter
	int result;  // one exam result

	// Process 10 students using counter-controlled loop

	while (student <= 10)
	{
		// Prompt user for input and read it in

		printf("Enter result ( 1=pass,2=fail ): ");
		scanf("%d", &result);

		// If the result is 1, increment passes

		if (result == 1)
		{
			passes = passes + 1;
		}

		// Otherwise increment failures

		else
		{
			failures = failures + 1;
		}

		// Increment student counter

		student = student + 1;
	}

	// Display the number of passes and failures

	printf("Passed %d\n", passes);
	printf("Failed %d\n", failures);

	// If more than 8 students pass print congradulatory message

	if (passes > 8)
	{
		printf("Bonus to instructor!\n");
	}

	return 0;
}
