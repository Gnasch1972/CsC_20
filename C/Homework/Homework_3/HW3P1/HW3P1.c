//-----------------------------------------------------------------------------
// Program:  Homework 3 Part 1:  Random CLUE Speculations
// Programmer:  Joseph Cunningham
// Class:  CsC_20 - c
// Date:  2/20/19
//
// This program generates 10 random CLUE speculations.  It chooses a murderer
// from a list of 6 suspects, a weapon from a list of 6 weapons, and a room
// from a list of 9 rooms.  All choices ae randomly generated.  It outputs
// suggestions to the screen 1 line at a time.  While the scenarios can
// appear more than once each run a different list is generated every
// time the program is run.
//-----------------------------------------------------------------------------

#include <stdio.h>  // For input output
#include <stdlib.h>  // For srand() and rand()
#include <time.h>  // For time()

int main(void)
{

	// Variable declaration

	int counter;  // The for loop counter
	int murderer; // Number 1-6 for the suspect
	int weapon;  // Number 1-6 for the weapon
	int room;  // Number 1-9 for the room

	// Initialize the random number generator

	srand(time(NULL));

	// for loop to generate the scenarios

	for (counter = 1; counter <= 10; ++counter)
	{
		// Generate random numbers for the murderer, weapon and room

		murderer = rand() % 6 + 1;
		weapon = rand() % 6 + 1;
		room = rand() % 9 + 1;

		// Switch statement to choose a murderer

		switch (murderer)
		{
		case 1:
			printf("I suggest it was Ms. Scarlet, ");
			break;

		case 2:
			printf("I suggest it was Colonel Mustard, ");
			break;

		case 3:
			printf("I suggest it was Mrs. White, ");
			break;

		case 4:
			printf("I suggest it was Mr. Green, ");
			break;

		case 5:
			printf("I suggest it was Mrs. Peacock, ");
			break;

		case 6:
			printf("I suggest it was Proffessor Plum, ");
			break;
		}

		// Switch statement to choose a room

		switch (room)
		{
		case 1:
			printf("in the Hall, ");
			break;

		case 2:
			printf("in the Lounge, ");
			break;

		case 3:
			printf("in the Dining Room, ");
			break;

		case 4:
			printf("in the Kitchen, ");
			break;

		case 5:
			printf("in the Ballroom, ");
			break;

		case 6:
			printf("in the Conservatory, ");
			break;

		case 7:
			printf("in the Billiard Room, ");
			break;

		case 8:
			printf("in the Library, ");
			break;

		case 9:
			printf("in the Study, ");
			break;
		}

		// Switch statement to choose a weapon

		switch (weapon)
		{
		case 1:
			printf("with the Candlestick!\n");
			break;

		case 2:
			printf("with the Knife!\n");
			break;

		case 3:
			printf("with the Lead Pipe!\n");
			break;

		case 4:
			printf("with the Revolver!\n");
			break;

		case 5:
			printf("with the Rope!\n");
			break;

		case 6:
			printf("with the Wrench!\n");
			break;

		}
	}

	return 0;
}
