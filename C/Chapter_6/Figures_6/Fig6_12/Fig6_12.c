// Fig 6.12: Fig6_12.c
// The name of an array is the same as &array[0]

#include<stdio.h>

int main(void)
{
    char array[5]; // Define an array of size 5

    printf("  &array = %p\narray[0] = %p\n  &array = %p\n",
            array, &array[0], &array);

    return 0;
}
