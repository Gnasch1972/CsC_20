// Fig 5.12: Fig5_12.cpp
// A scoping example

#include<stdio.h>

void useLocal(void);  //  Function prototype
void useStaticLocal(void);  // Function prototype
void useGlobal(void);  // Function prototype

int x = 1;  // Global variable

// Function main begins program execution

int main(void)
{

	int x = 5;  // local variable to main

	printf("Local x in outer scope of main is %d\n", x);

	{
		// Start new scope

		int x = 7;

		printf("Local x in inner scope of main is %d\n", x);

	}

	printf("Local x in outer scope of main is %d\n", x);

	useLocal();  // useLocal has automatic local x
	useStaticLocal();  // useLocal has static local x
	useGlobal();  // useGlobal uses global x
	useLocal();  // useLocal reinitializes automatic local
	useStaticLocal();  // static local x retains its prior value
	useGlobal();  // global x also retains its value

	printf("\nLocal x in main is %d\n", x);

	return 0;
}

// useLocal reinitializes local variable x during each call

void useLocal(void)
{

	int x = 25;   // Intialized each time useLocal is called. 

	printf("\nLocal x in useLocal is %d after entering useLocal\n", x);

	x++;

	printf("\nLocal x in useLocal is %d after exiting useLocal\n", x);
}

//  useStaticLocal intializes static local variable x only the first time
//  the function is called;  value of x is save between calls to this 
//  function.

void useStaticLocal(void)
{
	// Initialized only the first time useStaticLocal is called

	static int x = 50;

	printf("\nLocal static x is %d on entering useStaticLoacl\n", x);

	x++;

	printf("Local static x is %d on exiting useStaticLoacl\n", x);

}

// Function useGlobal modifies global variable x during each call

void useGlobal(void)
{

	printf("\nGlobal x is %d on entering useGlobal\n", x);

	x *= 10;

	printf("Global x is %d on exiting useGlobal\n", x);
}