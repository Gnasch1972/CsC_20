// ----------------------------------------------------------------------------
// Program:  Ex 5.26 - Perfect Numbers
// Programmer:  Joseph Cunningham
// Date:  10/21/15
//
// This program prints a list of perfect number ranging from 1 - 1000
//-----------------------------------------------------------------------------
#include<stdio.h>

int perfect(int number);

int main(void)
{

	// Declare variables

	int i, j;  // for loop control variables
	int perfectYN;  // Function return 1 = perfect, 0 = not

	for(i = 1; i <= 20000; i++)
	{
		perfectYN = perfect(i);
		//printf("%d", perfectYN);

		if(perfectYN == 1)
		{
			printf("%d is a perfect number with factors = ", i);
			for (j = 1; j < i; j++)
			{
				if ((i % j) == 0)
				{
					printf("%d ", j);
				}
			}

			printf("\n");
		}

	}
}

//-----------------------------------------------------------------------------
// Function:  int perfect(int number)
// Input:  int value number to be determined if perfect
// Output:  int value 1 if perfect, 0 if not
//-----------------------------------------------------------------------------
int perfect(int number)
{
	int i;  // for loop controll
	int j = 0;  // Sum of factors

	for (i = 1; i < number; i++)
	{
		//printf("number % i = \n", number % i);
		if((number % i) == 0)
		j += i;
	}

	if (j == number)
	{
		return 1;
	}

	else
		return 0;
}