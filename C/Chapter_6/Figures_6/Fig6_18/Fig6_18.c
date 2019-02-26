//-----------------------------------------------------------------------------
// Fig 6.18: Fig6_18.c - Linear Search
// Linear search of an array
// ----------------------------------------------------------------------------

#include<stdio.h>
#define SIZE 100

// Function prototype

int linearSearch(const int array[], int key, int size);

int main(void)
{
    // Declare and initialize variables
    
    int a[SIZE]; // Create array a
    int x; // counter for initializing elents 0-99 of array a
    int seachKey; // Value to be located in array a
    int element; // Variable to hold location of searchKey or -1

    // Creat data
    for(x = 0; x < SIZE; x++)
    {
        a[x] = 2 * x;
    }

    // Prompt user for seach key
    
    printf("Enter integer seach key:\n");
    scanf("%d", &seachKey);

    // Attempt to locate seatchKey in array a
    
    element = linearSearch(a, seachKey, SIZE);

    // Display results
    
    if (element != -1)
    {
        printf("Found value in element %d\n", element);
    }
    else
    {
        printf("Value not found\n");
    }

    return 0;
}

//-----------------------------------------------------------------------------
// Compare key to every element of array until the loaction is found or until
// the end of the array is reached.  
// Return: subscript of element if key or -1 if key is not found
//-----------------------------------------------------------------------------

int linearSearch(const int array[], int key, int size)
{
    // Declare variables
    int n; // counter

    // Loop through array
    for(n = 0; n < size; ++n)
    {
        if (array[n] == key)
        {
            return n;
        }
    }

    return -1;
}
