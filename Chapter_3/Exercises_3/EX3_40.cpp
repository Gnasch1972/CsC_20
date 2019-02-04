//-----------------------------------------------------------------------------
// Program: 3.40 - Checkerboard Pattern of Asterisks
// Programmer:  Joseph Cunningham
// Date 10/5/15
//
// This program will print a patter of astrisks
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{

	int count = 1; 
	int j;

	while (count <= 8)
	{
		if (count % 2 == 1)
		{
			for (j = 1; j <= 8; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf(" ");
			
			for (j = 1; j <= 8; j++)
			{
				printf("* ");
			}

			printf("\n");
		}

		count++;
	}
	return 0;
}