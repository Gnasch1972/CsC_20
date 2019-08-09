//*****************************************************************************
// Program: Duplicate Elimination
// Programmer: Joseph Cunningham
// Class: CsC 20: C
// Data: 8/7/2019
//
// This program will read in 20 numbers between 10 and 100 inclusive.  It will
// print that number if and only if it is has not already been read.
//*****************************************************************************

#include<stdio.h>
#define SIZE 20
int main(void)
{
    // Variables

    int num;                    // Number to be entered by user
    int i;                      // loop counter
    int count = 0;              // Number of numbers read
    int uniqueNum = 0;          // Number of unique number stored
    int numArr[SIZE];           // Array to store unique numbers
    int boolean = 1;            // If condition is true

    // First time reading a number from user
    
    printf("Please enter 20 numbers between 10 - 100 inclusive: ");
    scanf("%d", &num);

    numArr[count] = num;

    count++;

    // Loop through the next 19 numbers
    
    while(count < SIZE)
    {
        scanf("%d", &num);

        for(i = 0; i < count; i++)
        {
            if(num == numArr[i])
            {
                boolean = 0;
                break;
            }
        }

        if(boolean == 1)
        {
            uniqueNum++;
            numArr[uniqueNum] = num; 
        }

        count++;
        boolean = 1;
    }
    
    // Output array
    
    printf("Unique numbers entered\n");

    for (i = 0; i <= uniqueNum; i++)
    {
        printf("%d ", numArr[i]);
    }

}
