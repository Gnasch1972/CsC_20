// Fig 5.4:  Fig5_4.cpp
// Finding the maximum of three integers

#include <stdio.h>

int maximum(int x, int y, int z);  // Function prototype

// Function main begin program execution

int main(void)
{

	int number1;  // First integer
	int number2;  // Second integer
	int number3;  // Third integer

	printf("Enter three integers: ");  
	scanf("%d%d%d", &number1, &number2, &number3);

	// number1, number2, and number3 are all arguments to the maximum function call

	printf("Maximum is %d\n", maximum(number1, number2, number3));

	return 0;
}

// Function maximum definition

int maximum(int x, int y, int z)
{

	int max = x;  // Assume x is largest

	if (y > max) // If y is larger than max assign y to max
	{
		max = y;
	}
	
	if (z > max)  // If z is larger than max assign z to max
	{
		max = z;
	}

	return max;
}