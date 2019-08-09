//****************************************************************************
// Program: What does this do 1?
// Programmer: Joseph Cunningham
// Class: CsC_20: C
// Date: 8/7/2019
//
// This program tests what the program listing does.
//
// Hypothesis:  10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 55
//
// ****************************************************************************

#include<stdio.h>
#define SIZE 10

int whatIsThis(const int b[], int p);  // Function prototype

int main(void)
{
    int x;  // Holds return value of function whatIsThis

    // Initializes array
    
    int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    x = whatIsThis(a, SIZE);

    printf("Result is %d\n", x);

    return 0;
}

// What does this function do

int whatIsThis(const int b[], int p)
{
    // Base case
    
    if(p == 1)
    {
        return b[0];
    }

    else
    {
        return b[p - 1] +whatIsThis(b, p -1);
    }
}
 
