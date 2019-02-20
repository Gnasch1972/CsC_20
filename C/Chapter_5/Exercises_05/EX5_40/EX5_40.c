//-----------------------------------------------------------------------------
// Program: Ex 5.40 - Recursive main
// Programmer:  Joseph Cunningham
// Class: CsC_20 - c
// Date:  2/20/19
//
// This program calls main recursively
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	static int count = 1;

	printf("%d\n", count);

	count++;
	main();

	return 0;
}
