// Fig 5.3: Fig5_3.cpp
// Creating and using a user-defined function

#include<stdio.h>

int square(int y);  // Function prototype

//  Function main begins program execution

int main(void)
{

	int x;  // Counter

	// Loop 10 times to calculate and output square of x each time

	for (x = 1; x <= 10; x++)
	{
		printf("%d ", square(x));  // Function call
	}

	printf("\n");

	return 0;
}

// Square function definition returns square of parameter

int square(int y)  // y is a copy of argument to function
{

	return y * y;  // Returns square of y as an int

}