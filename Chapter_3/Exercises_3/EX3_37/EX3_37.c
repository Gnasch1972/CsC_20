//-----------------------------------------------------------------------------
// Program:  EX 3.27 - How fast is the computer
// Programmer:  Joseph Cunningham
// Date: 10/5/15
//
// This program will count from 1 to 300,000,00.  It will output multiples of 
// 100,000,000.
//-----------------------------------------------------------------------------

#include<stdio.h>

int main(void)
{
	int i = 1; // Loop count
	int a = 1; // 100 mill count

	for (i; i <= 300000000; i++)
	{
		if (i == a * 100000000)
		{
			printf("%d\n", a * 100000000);
			a++;
		}
	}
	return 0;
}
