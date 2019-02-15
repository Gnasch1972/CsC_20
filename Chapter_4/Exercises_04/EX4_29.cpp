//-----------------------------------------------------------------------------
// Program:  Ex 4.29 - DeMorgan's Laws
// Programmer: Joseph Cunningham
// Date:  10/30/15
//
// This program demonstated DeMorgans laws
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	int x, y, a, b, g, i, j;

	// 1st Test

	x = 6;
	y = 6;

	printf("Ex 4.40a\n");
	if (!(x < 5) && !(y >= 7))
		printf("\tNot A AND Not B\n");
	if (!(x < 5) || (y >= 7))
		printf("\tNot(x OR y)\n");

	// 2st Test

	a = 6;
	b = 7;
	g = 5;

	printf("Ex 4.40b\n");
	if (!(a ==b) || !(g != 5))
		printf("\tNot A OR Not B\n");
	if (!(a == b && g != 5))
		printf("\tNot(a AND y)\n");

	// 3rd Test

	x = 10;
	y = 3;

	printf("Ex 4.40c\n");
	if (!((x <= 8) && (y > 4)))
		printf("\tNot (A AND B)\n");
	if (!(x < 8) || !(y > 4))
		printf("\tNot A OR NOT B)\n");

	// 4th Test

	i = 3;
	j = 7;

	printf("Ex 4.40d\n");
	if (!((i > 4) || (j <= 6)))
		printf("\tNot (A OR B)\n");
	if (!(i > 4) && !(j <= 6))
		printf("\tNot A AND Not B\n");
	return 0;
}