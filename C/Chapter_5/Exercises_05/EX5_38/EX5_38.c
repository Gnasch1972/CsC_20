//-----------------------------------------------------------------------------
//  Progam: EX5_39.c - Visualizing Recursion
//  Programmer: Joseph Cunningham
//  Class: CsC_20 - c
//  Date: 2/19/19
//
//  Recursive factortial function with added print statements to make for
//  clearer picture of recursion
//-----------------------------------------------------------------------------

#include<stdio.h>

long factorial(long number);  // Function prototype
void printRecursion(int n);
// Function main begins program execution

int main(void)
{

	int i;  // Counter

 // Loop 11 times;  during each interation, calculate factorial(i) and 
 // display result

	for (i = 0; i <= 10; i++)
	{

		printf("%2d! = %ld\n", i, factorial(i));
	}

	return 0;
}

// Recursive definiiton of function factorial

long factorial(long number)
{

	// Base case

	if (number <= 1)
	{
		return 1;
	}

	else
	{
		printRecursion(number);
		return(number*factorial(number - 1));
	}
}

//-----------------------------------------------------------------------------
// Function: void printRecursion(int n);
// Input:  int value -> number to print
// Output: none
//-----------------------------------------------------------------------------
void printRecursion(int n)
{
	printf("number = %*d\n", n, n);
}
