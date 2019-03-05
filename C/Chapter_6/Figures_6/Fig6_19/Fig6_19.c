//-----------------------------------------------------------------------------
// Fig 6-19: Fig6_19.c Binary Search
// Searches a sorted array using binary search
//-----------------------------------------------------------------------------

#include<stdio.h>
#define SIZE 15

// Function prototypes
int binarySearch(const int b[], int searchKey, int low, int high);
void printHeader(void);
void printRow(const int[], int low, int mid, int high);

int main(void)
{
    int a[SIZE]; // Create array a
    int i; // counter for intializing elements 0-14 of array a
    int key; // Value to locate in array a
    int result; // Variable to hold location of key or -1

    // Create data
    
    for(i = 0; i < SIZE; i++)
    {
        a[i] = 2 * i;
    }

    printf("Enter a number between 0 and 28: ");
    scanf("%d", &key);

    printHeader();

    // Search for key in array a
    
    result = binarySearch(a, key, 0, SIZE -1 );

    // Display results
    
    if(result != -1)
    {
        printf("\n%d found in array element %d\n", key, result);
    }

    else
    {
        printf("\n%d not found\n", key);
    }

    return 0;
}

//-----------------------------------------------------------------------------
// Function: printHeader - print a header for the output
//-----------------------------------------------------------------------------

void printHeader(void)
{
    int i; // counter

    printf("\nSubscripts:\n");

    // Output column head
    for(i = 0; i < SIZE; i++)
    {
        printf("%3d ", i);
    }

    printf("\n");

    // Output line of - characters
    
    for(i = 0; i <= 4 * SIZE; i++)
    {
        printf("-");
    }

    printf("\n");
}

//-----------------------------------------------------------------------------
// Function: binarySearch - perform binary search of an array
//-----------------------------------------------------------------------------

int binarySearch(const int b[], int searchKey, int low, int high)
{
    int middle; // variable to hold middle element of array

    // Loop until the low subscript is greater tthan high subscript
    while (low <= high)
    {
        // Determine the middle of the subarray being searched
        middle = (low + high) / 2;

        // Display subarray used in this loop 
        
        printRow(b, low, middle, high);

        // If searchKey matched the middle element, return middle
        if(searchKey == b[middle])
        {
            return middle;
        }

        // if searchKey less than middle element, set new high
        
        else if (searchKey < b[middle])
        {
            high = middle - 1;
        }

        // if searchKey greater than middle element, set new low
        
        else
        {
            low = middle + 1;
        }
    }

    return -1;
}

//-----------------------------------------------------------------------------
// Function: printRow - print one row of output showing the current part of the
// array being precessed
//-----------------------------------------------------------------------------

void printRow(const int b[], int low, int mid, int high)
{
    int i;  // Counter for iterating through array b

    // loop through entire array
    
    for (i = 0; i < SIZE; i++)
    {
        // Display spaces if outside current subarray range
        
        if (i < low || i > high){
            printf("    ");
        }

        // Display middle element
        else if (i == mid)
        {
            printf("%3d*", b[i]);
        }

        // Display other elements in the subarray
        else
        {
            printf("%3d ", b[i]);
        }
    }

    printf("\n");
}
