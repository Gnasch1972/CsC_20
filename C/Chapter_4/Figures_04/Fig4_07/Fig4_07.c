// Fig4.7: Fig4_7.cpp
// Counting letter grades with switch

#include<stdio.h>

// Function main begins program execution here

int main(void)
{
	int grade;  // One grade
	int aCount = 0;  // Number of As
	int bCount = 0;  // Number of Bs
	int cCount = 0;  // Number of Cs
	int dCount = 0;  // Number of Ds
	int fCount = 0;  // Number of Fs

	printf("Enter the letter grades. \n");
	printf("Enter the EOF character to end input.\n");

	// Loop until user types end-of-file key sequence

	while ((grade = getchar()) != EOF)
	{
		// Determine which grade was input 
		
		switch (grade)
		{
			//  Grade is A or a, increment aCount and exit switch
		case 'A':  
		case 'a': 
			++aCount; 
			break; 

			//  Grade is B or b, increment bCount and exit switch
		case 'B':  
		case 'b':  
			++bCount; 
				break;  
			
			//  Grade is C or c, increment cCount and exit switch
		case 'C': 
		case 'c':  
			++cCount; 
			break;

			//  Grade is D or d, increment dCount and exit switch
		case 'D':
		case 'd':
			++dCount;
			break;

			//  Grade is F or f, increment fCount and exit switch
		case 'F':
		case 'f':
			++fCount;
			break;
			// Ignore newlines, tabs, and spaces in input...exit switch
		case '\n':
		case '\t':
		case ' ':
			break;

			// Catch all other characters
		default:
			printf("Incorrect letter grade entered");
			printf("Enter a new letter grade.\n");
			break;
		}
	}

	// Output summary of results

	printf("\nTotals for each letter grade are:\n");
	printf("A:%d\n", aCount);  // Display number of A grades
	printf("A:%d\n", bCount);  // Display number of B grades
	printf("A:%d\n", cCount);  // Display number of C grades
	printf("A:%d\n", dCount);  // Display number of D grades
	printf("A:%d\n", fCount);  // Display number of F grades

	return 0;
}