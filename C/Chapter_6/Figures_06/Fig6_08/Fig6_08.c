/* Fig 6.8: Fig6_08.c
   Histogram printing program */

#include<stdio.h>
#define SIZE 10

int main(void)
{
    // Variable declaration and initialization
    
    int n[SIZE] = {19, 3, 15, 7, 11, 9, 13,5, 17,1};
    int i; // outer couter for array
    int j; // inner couter for array histogram

    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    // Print the histogram

    for (i = 0; i < SIZE; i++)
    {
        printf("%7d%13d        ", i, n[i]);

        for(j = 1; j<= n[i]; j++)
        {
            printf("%c", '*');
        }
    
        printf("\n");
    }

    return 0;
}
