/*
Name:
Copyright: Deitel C How to Program
Author: StackOverflow1453
Date: 23.04.2013 14:13:12
Description:

A player rolls two dice. Each die has six faces.
These faces contain 1, 2, 3, 4, 5, and 6 spots.
After the dice have come to rest, the sum of the spots on the two upward
faces is calculated. If the sum is 7 or 11 on the first throw, the player wins.
If the sum is 2, 3,or 12 on the first throw (called “craps”), the player loses
(i.e., the “house” wins). If thesum is 4, 5, 6, 8, 9, or 10 on the first throw,
then that sum becomes the player’s“point.” To win, you must continue rolling
the dice until you “make your point.” Theplayer loses by rolling a 7 before
making the point.


Modify the craps program of Fig. 5.10 to allow wagering.
Package as a function the portion of the program that runs one
game of craps. Initialize variable bankBalance to 1000 dollars.
Prompt the player to enter a wager. Use a while loop to check that wager is less than or equal to bankBalance and if not prompt the user to reenter wager until a valid wager is entered. After
a correct wager is entered,run one game of craps.

If the player wins, increase bankBalance by wager and print the new bank-
Balance.

If the player loses, decrease bankBalance by wager, print the new bankBalance, check if bankBalance has become
zero, and if so print the message "Sorry. You busted!"

As the game progresses, print various messages to create some “chatter” such as
"Oh, you're going for broke, huh?", or
"Aw cmon, take a chance!", or
"You're up big. Now's the time to cash in your chips!".







*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int askWager(void);
int rollDice(void);
void assess(int bankBalance);

int main(void) {

	int roll;
	int playersPoint = 0;
	int targetPoint = 0;
	int count;
	int winCount = 0;			//How many times did you win?
	int loseCount = 0;		//How many times did you lose?
	int i;
	int howManyTimes = 0;		//How many times do you want the game run?
	int rollCount = 0;		//This counts the number of dice rolled whole
	int bankBalance = 1000;
	int wager;

	srand(time(0));			//You have to call srand once and under main!!! Not in rollDice() function!!!		


	enum Gamestatus { WON, LOST, CONTINUE };
	enum Gamestatus status;


	printf("Game starting!!\n");
	printf("Your balance is 1000USD!!\n");

	while (bankBalance>0) {

		printf("Are you ready!!!!!!!\n\n");
		wager = askWager();
		rollCount++;
		roll = rollDice();
		printf("You rolled %d.\n", roll);
		count = 1;

		switch (roll) {

		case 7:
		case 11:
			status = WON;
			printf("You WON in %d assumptions!\n", count);
			printf("Your balance is now: %d. ", bankBalance += wager);
			winCount++;
			assess(bankBalance);

			break;

		case 2:
		case 3:
		case 12:
			status = LOST;
			printf("You LOST in %d assumptions!\n", count);
			printf("Your balance is now: %d. ", bankBalance -= wager);
			loseCount++;
			assess(bankBalance);
			break;

		default:
			status = CONTINUE;
			targetPoint = roll;
			printf("Your target point is: %d \n", roll);

			while (status == CONTINUE) {
				count++;
				printf("You are rolling again: \n");
				rollCount++;
				printf("You rolled %d\n", roll = rollDice());

				if (targetPoint == roll) {

					printf("You WON in %d assumptions!\n", count);
					printf("Your balance is now: %d. ", bankBalance += wager);
					winCount++;
					status = WON;
					assess(bankBalance);


				}
				else if (7 == roll) {

					printf("You LOST in %d assumptions!\n", count);
					printf("Your balance is now: %d. ", bankBalance -= wager);
					loseCount++;
					status = LOST;
					assess(bankBalance);
				}
				else
					status = CONTINUE;

			} //end while

		}//end switch

	}//end while

	printf("You are bankrupt!!!!!\n");
	printf("Total winners: %d\nTotal losers: %d\n", winCount, loseCount);
	printf("You rolled the dice %d times.", rollCount);
	

	return 0;
}//end main

int rollDice(void) {

	return (1 + rand() % 6) + (1 + rand() % 6);

}

int askWager(void) {

	int wager;
	printf("What is your wager amount?  ");
	scanf("%d", &wager);
	return wager;
}


void assess(int bankBalance) {

	if ((bankBalance<500) && (bankBalance>0))
		printf("Oh, you're going for broke, huh?\n");
	else if ((bankBalance >= 500) && (bankBalance<1100))
		printf("Aw cmon, take a chance!?\n");
	else if (bankBalance>1100)
		printf("You're up big. Now's the time to cash in your chips!\n");
	else printf("You are bankrupt!!!!!\n");

}
