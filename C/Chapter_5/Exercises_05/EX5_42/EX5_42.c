//-----------------------------------------------------------------------------
// Program: Ex 5.42 - What does it do?
// Programmer:  Joseph Cunningham
// Class: CsC_20 -c
// Date:  2/20/19
//
// I belive it retrieves and prints characteres read from the input until EOF
//-----------------------------------------------------------------------------
#include<stdio.h>

int main(void)
{
	int c;

	if ((c = getchar()) != EOF)
	{
		main();
		printf("%c", c);
	}

	return 0;
}
