/* Fig 6.7: Fig6_07.c
   Student poll program */

#include<stdio.h>

// Define array sizes

#define REPSONSE_SIZE 40
#define FREQUENCY_SIZE 11

int main(void)
{
    // Initialize variables
    
    int answer; // couter loop for 40 responses
    int rating; // counter for frequency
    int frequency[FREQUENCY_SIZE] = {0};  
    int responses[REPSONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
    1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5,
    6, 7, 5, 6, 4, 8, 6, 8, 10};

    /* for each answe, select a value, of an element of array responses
       and use that value as subscript in array frequency to determine
       element to increment */

    for (answer = 0; answer < REPSONSE_SIZE; answer++)
    {
        ++frequency[responses[answer]];
    }

    // Display results
    
    printf("%s%17s\n", "Rating", "Frequnecy");

    for (rating = 1; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%6d%17d\n", rating, frequency[rating]);
    }

    return 0;
}
