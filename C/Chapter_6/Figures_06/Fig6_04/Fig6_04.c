/* Fig6.4: fig06.04.c
   intializing an array with inintializer list*/

#include<stdio.h>

int main (void)
{
    // use initializer list to initialize array n
    
    int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37} ;
    int i; // counter

    printf("%s%13s\n", "Element", "Value");

    /* output contents of array n in tablular format */

    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }

    return 0;
}
