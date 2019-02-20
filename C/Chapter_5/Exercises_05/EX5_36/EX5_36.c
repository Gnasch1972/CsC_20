//-----------------------------------------------------------------------------
// Program:  Ex 5.36 - Towers of Hanoi
// Programming:  Joseph Cunningham
// Class: CsC_20 - c
// Date:  2/19/19
//
//  This program solves the Tower of Hanoi problem.  It prompts the user for
//  the number of disks user, the starting peg, the ending peg and the spare 
//  peg.
//------------------------------------------------------------------------------
#include<stdio.h>

void move(int disks, char start, char end, char spare);

int main(void)
{
	//  Declare variables

	int numDisks;  // User input - number of disks used
	char startPeg;  // User input - starting peg
	char endPeg; // User input - ending peg
	char sparePeg;  // User input spare peg

	// Output instructions and prompt user for info

	printf("Welcome to the Towers of Hanoi Solver\n");
	printf("Pegs are labeled A - C\n");
	printf("Please enter the number of disks to move: ");
	scanf("%d", &numDisks);
	printf("Please enter the starting peg: ");
	scanf(" %c", &startPeg);
	printf("Please enter the desination peg: ");
	scanf(" %c", &endPeg);
	printf("Please enter the spare peg: ");
	scanf(" %c", &sparePeg);

	// Make call to move

	move(numDisks, startPeg, endPeg, sparePeg);

	return 0;
}

//-----------------------------------------------------------------------------
// Function: void move(int disks, int start, int end, int spare)
// Input: int value disks - number of disks to be moved
//			 char values startPeg - where the disks start
//							 endPeg - where the disks are to be moved
//							 sparePeg - the peg that can be used to store
// Output:  None
//-----------------------------------------------------------------------------
void move(int disks, char start, char end, char spare)
{
	if (disks == 1)
		printf("Move disk %d from %c to %c\n", disks, start, end);
	
	else
	{
		move(disks - 1, start, spare, end);
		printf("Move disk %d from %c to %c\n", disks, start, end);
		move(disks - 1, spare, end, start);
	}
}
