//-----------------------------------------------------------------------------
// Program:  Ex 5.44 - What does this do
// Programmer: Joseph Cunningham
// Date: 11/11/15
//
// I believe that this program will add a series of numbers to a.
//-----------------------------------------------------------------------------
#include<stdio.h>

int mystery(int a, int b);

int main(void)
{
	int x;
	int y;

	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);

	printf("The result is %d\n", mystery(x, y));

	return 0;
}

int mystery(int a, int b)
{
	if (b <= 1)
	{
		return a;
	}
	else
		return a + mystery(a, b - 1);
}