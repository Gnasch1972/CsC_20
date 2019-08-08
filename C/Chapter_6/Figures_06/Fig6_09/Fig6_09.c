// Fig 6.9: Fig6_09.c
// Roll a six-sided die 6000 times

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7

int main(void)
{
    int face; // random die roll 1-6
    int roll; // roll counter 1- 6000
    int frequency[SIZE] = {0}; // Initialize counts

    srand(time(NULL));  // Seed the random numbers generator

    // Roll the die 6000 times
    
    for(roll = 1; roll <= 6000; roll++)
    {
        face = 1 + rand() % 6;
        ++frequency[face];
    }

    printf("%s%17s\n", "Face", "Frequency");

    // Output the results
    
    for( face = 1; face < SIZE; face++)
    {
        printf("%4d%17d\n", face, frequency[face]);
    }

    return 0;
}
