//-----------------------------------------------------------------------------
// Program: EX5_31.c - Coin Tossing
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/18/19
//
// This program similates a coin being tossed 100 times.  It will output the
// number of head and tails that came up.
//-----------------------------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int flip(void);  // Function prototype

int main(void)
{
    // Seed the random number generator
    
    srand(time(NULL));

    // Declare and initialize variables
    int count_h = 0; // Number of times heads comes up
    int count_t = 0; // NUmber of times tails comes up

    for(int i = 1; i <= 100; i++)
    {
        if(flip() == 1)
        {
            printf("HEADS\n");
            count_h++;
        }
        else
        {
            printf("TAILS\n");
            count_t++;
        }
    }

    // Output totals
    printf("Total HEADS = %d: Total TAILS= %d\n", count_h, count_t);

    return 0;
}

//-----------------------------------------------------------------------------
// Function: flip - simulates a coin flip
// 
// Returns: 1 for heads or 0 for tails
//-----------------------------------------------------------------------------

int flip(void)
{
    return rand() % 2;
}
