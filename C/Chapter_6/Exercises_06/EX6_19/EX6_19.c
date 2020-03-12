//*****************************************************************************
// Program 6-17: Dice Rolling
// Programmer: Joseph Cunningham
// Class: CsC20: C
// Date: 8/8/2019
//
// This program will simulate a the random rolling of two 6 sided dice.  It will
// calculate the sum and track the frequency of those values.  It will output in
// a table the dice sums, the frequency rolled, the percentage, and the
// probablity as a percentage.
// *****************************************************************************

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIDE 6          // The number of dice sides
#define SIZE 13         // The size of the array
#define ROLLS 36000     // Number of rolls to simulate
#define TOTAL 36        // Number of possible rolls

int main (void)
{
    // Variables declaration
    
    int     sumArray[SIZE];         // Array containing the sum frequency
    float   probArray[SIZE] = {0};    // Array of probablities
    int     count = 1;              // Used to calcualte probabilities   

    // Initialize probablity array
    
    for(int i = 2; i < SIZE; i++)
    {
        if(count <= 6)
        {
            printf("%.2f / %.2f = %.2f\n", (float)count,(float) TOTAL,(float) count /(float) TOTAL);
            probArray[i] = (float) count / (float) TOTAL;
            count++;
        }
        else
        {
            count--;
            probArray[i] = (float) count / (float) ROLLS;
        }
    }

    /*for(int i = 2; i < SIZE; i++)
    {
        printf("Sum %d = %.2f\n", i, probArray[i] * 100.0 );
    }*/

    return 0;

}

