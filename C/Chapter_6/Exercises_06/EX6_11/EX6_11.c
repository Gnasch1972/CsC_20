// Fig 6.15: Fig6_15.c
// This program sorts an array's values into ascending order

#include<stdio.h>
#define SIZE 10

int main(void)
{
    // Delcare and initialize variables
    
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 37, 45, 89, 68};
    int pass; // number of passes counter
    int i; // comparisons counter
    int hold; // temporay location for holing array members
    int swap = 0;

    printf("Date items in original order\n");

    // Output the original array
    
    for (i= 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    // Bubble sort
    
    // Loop to control number of passes
    
    for(pass = 1; pass < SIZE; pass++)
    {
        // Loop to control number of comparisons per pass
        
        for(i = 0; i < SIZE - pass; i++)
        {

            // Compare adjacent elements to swap them if first element is
            // greater than second element
            
            if(a[i] > a[i+1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                swap += 1;
                
            }
        }
         
        if(swap == 0)
        {
            break;
        }
    }

    printf("\nData items in ascending order:\n");

    // Output sorted array

    for (i = 0; i< SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n");
    
    return 0;

}
