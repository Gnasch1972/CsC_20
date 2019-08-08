/* Fig 6.6: Fig6_06.c
   Compute the sum of the elements of the array */

#include<stdio.h>
#define SIZE 12 

int main(void)
{
    // Intialize variables
    
    int a[SIZE] ={1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45}; // Integer array of size SIZE
    int i; // Counter
    int total; // Sum of array a

    // Sum the contents of array a
    for(i = 0; i < SIZE; i++)
        total += a[i];

    printf("Total of array element valus is %d\n", total);
    return 0;

}
