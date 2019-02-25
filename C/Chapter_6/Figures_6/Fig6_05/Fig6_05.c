/* Fig 6.5: Fig6_05.c 
   Initializes the elements of array s to the even inegers from 2 to 20 */

#include<stdio.h>
#define SIZE 10 /* maximum size of an array */


int main(void)
{
    /* Symbolic constant SIZE can be used to specify array size */

    int s[SIZE]; // array s has SIZE elements
    int j; // counter

    for (j = 0; j < SIZE; j++)
    {
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Element", "Value");

    for(j = 0; j < SIZE; j++)
    {
        printf("%7d%13d\n", j, s[j]);
    }

    return 0;
}
