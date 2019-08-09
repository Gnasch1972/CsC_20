//*****************************************************************************
// Program: What does this do 2
// Programmer: Joseph Cunningham
// Class: CsC_20: C
// Date: 8/7/2019
//
// This program tests the output of the sample program
//
// Hypothesis:  Reverses the order of the array
//          5 4 7 9 0 6 2 1 3 8
//*****************************************************************************

#include<stdio.h>
#define SIZE 10

void someFunction(const int b[], int startIndex, int size);

int main(void)
{
    int a[SIZE] = {8, 3, 1, 2, 6, 0, 9, 7, 4, 5};

    printf("Answer is: \n");
    someFunction(a, 0, SIZE);
    printf("\n");
    return 0;
}

void someFunction(const int b[], int startIndex, int size)
{
    if (startIndex < size)
    {
        someFunction(b, startIndex + 1, size);
        printf("%d ", b[startIndex]);
    }
}
