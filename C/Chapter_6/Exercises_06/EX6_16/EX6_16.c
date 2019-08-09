//*****************************************************************************
// Program: Sales Array
// Programmer: Joseph Cunningham
// Class: CsC 20: C
// Date: 8/7/2019
//
// This program prints out the order in which the arrays rows and columns are
// set to 0.
// ****************************************************************************

#include<stdio.h>

int main (void)
{
    int row;
    int column;
    int sales[2][4];

    for(row = 0; row <= 2; row++)
    {
        for(column = 0; column <= 4; column++)
        {
            sales[row][column] = 0;
            printf("sales[%d][%d]\n", row, column);
        }

        printf("\n");
    }
}
