//-----------------------------------------------------------------------------
// Program: EX5_25.c - Find the Mimimum
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/17/19
//
// This program will find the smallest of three floating-point values and output
// that number to the screen
//-----------------------------------------------------------------------------

#include<stdio.h>

float find_minimum (float x, float y, float z);

int main(void)
{
   float x, y, z; // User input 
   
    // Prompt user for 3 floating-point numbers
    
    printf("Please enter 3 floating point numbers: ");
    scanf("%f%f%f", &x, &y, &z);

    float min = find_minimum(x, y, z);

    printf("Minimum number = %f", min);

    return 0;
}

//-----------------------------------------------------------------------------
// Function: find_minimum(x, y, z) - finds the minimum number input
// Input: 3 floating point numbers
// Output: none
// Return: float minimum value
//-----------------------------------------------------------------------------

float find_minimum(float x, float y, float z)
{
    float smallest = x;

    if (y < smallest)
        smallest = y;
    if (z < smallest)
        smallest = z;

    return smallest;
}
