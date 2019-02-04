// Fig 3.13:  Fig3_13.cpp
// Preincrementing and postincrementing

#include<stdio.h>

// Function main begins program execution

int main(void)
{
	int c;  // Define varable

	// Demonstrate postincrement

	c = 5;  // Assign 5 to c

	printf("%d\n", c);  // Print 5
	printf("%d\n", c++); // Print 5 and increment
	printf("%d\n", c);  // Print 6

	// Demonstrate preincrement

	c = 5;  // Assign 5 to c

	printf("%d\n", c); // Print 5
	printf("%d\n", ++c); //Preincrement and print 6
	printf("%d\n", c);  // Print 6

	return 0;
}
