//-----------------------------------------------------------------------------
// Program: EX 4.26 - Calculating the Value of Pi
// Programmer:  Joseph Cunningham
// Date:  10/10/15
//
// This program will calcule an approximation of pi in interations.  
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	// Variable declarations and intialization

	float pi = 4.0;  //  Value of pi
	int i;  // For loop control variable
	int den = 1; // Denominatior for the approxiamtion
	// int intPi; 

	// Print the header and the first loop iteration

	printf("Term\tValue\n");
	printf("-------------------\n");
	printf("1\t%.5f\n", pi);

	for (i = 1; i <= 399; i++)
	{

		den += 2;


		if (i % 2 == 0)
		{
			pi += 4 / (float)den;
		}

		else
		{
			pi -= 4 / (float)den;
		}

		printf("%d\t%.5f\n", i + 1, pi);
	
		
	}

	return 0;


}
