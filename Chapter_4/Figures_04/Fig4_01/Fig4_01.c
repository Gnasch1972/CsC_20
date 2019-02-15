// Fig 4.1:  Fig4_1.cpp
// Counter controlled repitition

#include<stdio.h>

// Program main begins program execution

int main(void)
{
	int counter = 1;  // Initialization

	while (counter <= 10)
	{
		printf("%d\n", counter);  // display counter
		++counter;  // Increment
	}
	
	return 0;
}