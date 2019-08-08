// Fig 6.11: Fig6_11.c
// Static arrays are are intialized to zero


#include<stdio.h>

// Function Prototype
void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
    printf("First call to each function\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each function\n");
    staticArrayInit();
    automaticArrayInit();

    return 0;
}

// Function to demonstrate a static local array

void staticArrayInit(void)
{
    static int array1[3]; // Initializes to 0 the first time function is called
    int i; // counter

    printf("\nValues on entering staticArrayInit:\n");

    // Output contents of array1
    for(i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d ", i, array1[i]);
    }

    printf("\nValues on exiting staticArrayInit:\n");

    // Modify contents of arrray1
    for (i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d ", i, array1[i] += 5);
    }
}

// Function to demonstrate an automatic local array

void automaticArrayInit(void)
{
    // Initialize array
    
    int array2[3] = {1, 2, 3};
    int i; // loop counter

    printf("\n\nValues on entering automaticArrayInit:\n");

    // Output contents of array2
    
    for(i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d ", i, array2[i]);
    }

    printf("\nValues on exiting automaticArrayInit:\n");

    // Modify and output array2
    
    for(i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d ", i, array2[i] += 5);
    }
}
