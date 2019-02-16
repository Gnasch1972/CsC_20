//-----------------------------------------------------------------------------
// Program:  EX 4.27 - Pythagorean Triples
// Programmer:  Joseph Cunningham
// Date: 10/10/15
//
// This program will print Pythagorean Triples up to the sides are 500
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int a, b, c;  // Sides of the triangles

	printf("a\tb\b\tc\n");
	printf("-------------\n");

	for (a = 1; a <= 500; a++)
	{
		for (b = 1; b <= 500; b++)
		{
			for (c = 1; c <= 500; c++)
			{
				if (a*a + b*b == c*c)
				printf("%d\t%d\t%d\n", a, b, c);
			}
		}
	}
}