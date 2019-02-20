//-----------------------------------------------------------------------------
// Program: Ex 5.27 - Prime Numbers
// Programmer:  Joseph Cunningham
// Class: Csc_20 - c
// Date: 2/18/19
//
// This program finds all the prime number between 1 & 1000.  First it tries all
// the numbers.  Then it tests it by n/2.  Finally by sqrt(n).
//-----------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

// Function prototypes
int is_prime1(int number);
int is_prime2(int number);
int is_prime3(int nunmber);

int main(void)
{
	// Declare variables


	int result; // Return value from function
    int count = 0; // Loop counter
	
	printf("PRIME NUMBERS (version 1)\n");

	for (int i = 1; i <= 10000; i++)
	{
		result = is_prime1(i);

		if(result == 1)
        {
            ++count;
			printf("%d ", i);

            if(count % 25 == 0)
                printf("\n");
        }
	}

    printf("\nNumber of primes = %d\n", count);

    printf("PRIME NUMBERS (version 2)\n");
    count = 0;

    for (int i = 1; i <= 10000; i++)
    {
        if(is_prime2(i) == 1)
        {
            ++count;
            printf("%d ", i);
            
            if(count % 25 == 0)
                printf("\n");
        }
    }

    printf("\nNumber of primes = %d\n", count);


    printf("PRIME NUMBERS (version 3)\n");
    count = 0;

    for (int i = 1; i <= 10000; i++)
    {
        if(is_prime3(i) == 1)
        {
            ++count;
            printf("%d ", i);
            
            if(count % 25 == 0)
                printf("\n");
        }
    }

    printf("\nNumber of primes = %d\n", count);

	return 0;
}


//-----------------------------------------------------------------------------
// Function:  int is_prime - checks all the values up to number for a factor
// Input: int value number to be tested for primeness
// Output:  int value - 1 = prime 0 not prime
//-----------------------------------------------------------------------------
int is_prime1(int number)
{
	// Declare variable
	int i;

	//printf("Number = %d\n", number);
	// If the number is less that or equal 2 it is prime
	if (number <= 2)
		return 1;

	// If greater than 2 then test each number 
	
	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

//-----------------------------------------------------------------------------
// Function: int is_prime2
// Like is_print1 but only checks number / 2 for factors
// number: the number to be checked for primeness
// Returns: 1 if number is prime, 0 if not
// ----------------------------------------------------------------------------
int is_prime2(int number)
{
    if (number <= 2)
        return 1;

    for (int i = 2; i <= number/2; i++)
    {
        if (number % i == 0)
            return 0;

    }
    return 1;
}


//-----------------------------------------------------------------------------
// Function: int is_prim3e
// Like is_print1 but only checks sqrt(number)for factors
// number: the number to be checked for primeness
// Returns: 1 if number is prime, 0 if not
// ----------------------------------------------------------------------------
int is_prime3(int number)
{
    if (number <= 2)
        return 1;

    for (int i = 2; i <=(int) sqrt(number); i++)
    {
        if (number % i == 0)
            return 0;

    }
    return 1;
}


