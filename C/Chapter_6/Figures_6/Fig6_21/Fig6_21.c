//-----------------------------------------------------------------------------
// Fig 6.21: Fig6_21.c - Initializing multidimensional arrays
//-----------------------------------------------------------------------------

#include<stdio.h>

void printArray(const int a[][3]);  // Function prototype

int main(void)
{
    // Variable declaration and initialization
    
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int array2[2][3] = {1, 2, 3, 4, 5};
    int array3[2][3] = {{1, 2}, {4}};

    printf("Values in array1 by row are: \n");
    printArray(array1);

    printf("Values in array2 by row are:\n");
    printArray(array2);

    printf("Values in array3 by row areL\n");
    printArray(array3);

    return 0;
}

//-----------------------------------------------------------------------------
// Funcrion: printArray - output array with two rows and three columns
//-----------------------------------------------------------------------------

void printArray(const int a[][3])
{
    int i; // row counter
    int j; // column counter

    // Loop through rows
    
    for(i = 0; i <= 1; i++)
    {
        // output column values
        
        for(j = 0; j <= 2; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}
