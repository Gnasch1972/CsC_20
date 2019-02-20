//-----------------------------------------------------------------------------
// Program: EX5_30.c - Qualify Points
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/18/19
// 
// This program test the function qualifyPoints.  The function will return a
// value when the user input of the student's average is passed.
// ----------------------------------------------------------------------------

#include<stdio.h>

int qualifyPoints(int average); // Function prototype

int main (void)
{
    for(int i = 55; i < 100; i += 10)
    {
        printf("Student Average is %d = %d points\n ", i, qualifyPoints(i));
    }

    return 0;
}

//-----------------------------------------------------------------------------
// Function: qualifyPoints - returns a point value for a students average per
// the following: 90-100: 4, 80-89: 3, 70-79:2, 60-69:1, 0-59:0
//
// average: integer value of a student's average
//
// returns: integer point value
// ----------------------------------------------------------------------------

int qualifyPoints(int ave)
{
    if(ave >= 90)
        return 4;
    else if(ave >= 80)
        return 3;
    else if(ave >= 70)
        return 2;
    else if(ave >= 60)
        return 1;
    else
        return 0;
}

