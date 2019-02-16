// Fig 5.5:  Fig 5_8
// Roll a six-sided dice 6000

#include<stdio.h>
#include<stdlib.h>

// Function main begins program execution

int main(void)
{

	int frequency1 = 0; // Rolled 1 counter 
	int frequency2 = 0; // Rolled 2 counter 
	int frequency3 = 0; // Rolled 3 counter 
	int frequency4 = 0; // Rolled 4 counter 
	int frequency5 = 0; // Rolled 5 counter 
	int frequency6 = 0; // Rolled 6 counter 

	int roll; // roll counter, value 1 to 6000 

	int face; // represents one roll of the die, value 1 to 6 

	// Loop 6000 times and summarize results

	for (roll = 1; roll <= 6000; roll++)
	{

		face = 1 + rand() % 6;  // Random number 1 to 6

		// Determine the face value and increment the appropiate counter

		switch (face)
		{
		
		case 1:  // Rolled a 1
			++frequency1;
			break;

		case 2:  // Rolled a 2
			++frequency2;
			break;

		case 3: // Rolled a 3
			++frequency3;
			break;

		case 4:  // Rolled a 4
				++frequency4;
				break;

		case 5: // Rolled a 5
			++frequency5;
			break;

		case 6: // Rolled a 6
			++frequency6;
			break;
		}
	}

	// Display results in tabluar format

	printf("%s%13s\n", "Face", "Frequency");
	printf("   1%13d\n", frequency1);
	printf("   2%13d\n", frequency2);
	printf("   3%13d\n", frequency3);
	printf("   4%13d\n", frequency4);
	printf("   5%13d\n", frequency5);
	printf("   6%13d\n", frequency6);

	return 0;
}