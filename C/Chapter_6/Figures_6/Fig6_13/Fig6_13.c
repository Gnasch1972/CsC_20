// Fig 6.12: Fig6_13.c
// Passing arrays and individual array elements to functions


#include<stdio.h>
#define SIZE 5 

// Function Prototypes
void modifyArray(int b[], int size);
void modifyElement(int e);

int main(void)
{
    // Varibale Declarations and Initializations
    
    int a[SIZE] = {0, 1, 2, 3, 4};  
    int i; // counter

    printf("Effects of passing entire array by reference: \n\nThe "
            "values of the orginal array are:\n");

    // Output original array
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\n");

    // Pass the array to modifyArray by reference
    
    modifyArray(a, SIZE);

    printf("The values of the modified array are: \n");

    // Output modified array
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    // Output value of a[3]
    
    printf("\n\n\nEffects of passing an element"
            "by value:\n\nThe value of a[3] is %d\n", a[3]);

    // Pass the element a[3] by value
    
    modifyElement(a[3]);

    // Output modified a[3]
    
    printf("The value of a[3] is %d\n", a[3]);

    return 0;
}

// Funtion: modifyArray(array, size): points at the original array in memory

void modifyArray(int b[], int size)
{
    int j; // counter

    // multiply each array element by 3
    
    for(j = 0; j < SIZE; j++)
    {
        b[j] *= 2;
    }
}

// Funtion: modifyElement(element): e is a local copy of array element a[3]
// passed from main

void modifyElement(int e)
{
    // Multiply e by 2
    
    printf("Value in modifyElement is %d\n", e *= 2);
}
