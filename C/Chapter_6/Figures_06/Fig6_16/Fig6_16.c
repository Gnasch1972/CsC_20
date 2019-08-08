//-----------------------------------------------------------------------------
// Fig 6.16: Fig6_16.c - Survey Data Analysis
// This program introduces the topic of survey data analysis.  It computes the
// mean, median and mode of the data.
//-----------------------------------------------------------------------------

#include<stdio.h>
#define SIZE 99

// Function prototypes

void mean(const int answer[]);  
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

int main(void)
{
    // Declare and intinalize variables
    
    int frequency[10] = {0};  // Frequency of values
    int response[SIZE] = { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                           7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                           6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                           7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                           6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                           7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                           5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                           7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 
                           7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                           4, 5, 6, 1, 6, 5, 7, 8, 7};

    // Process the repsonses
    
    mean(response);
    median(response);
    mode(frequency, response);

    return 0;
}

// Calucalre the mean or average of the response

void mean(const int answer[])
{
    // Declare and initialize variables
    
    int j;  // Loop counter for totaling sum
    int total = 0; // sum of the array

    // Sum the array
    for (j = 0; j < SIZE; j++)
    {
        total += answer[j];
    }

    // Ouput the mean
    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the data item divided by the number\n"
           "of data items (%d).  The mean value for \n"
           "this run is: %d / %d = %.4f\n\n",
           SIZE, total, SIZE, (double)total / SIZE);
}

// Sort the array and detemine the median

void median(int answer[])
{
    // Print the unsorted array
    
    printf("\n%s\n%s\n%s\n%s",
           "********", " Median", "********",
           "The unsorted array of responses is");

    printArray(answer);

    // Sort the array
    
    bubbleSort(answer);

    // Output sorted array
    
    printf("\n\nThe sorted array is");
    printArray(answer);

    // Display median
    
    printf("\n\nThe median is element %d of \n"
           "the sorted %d element array.\n"
           "For this run the median is %d\n\n",
            SIZE / 2, SIZE, answer[SIZE/2]);
}


// Detemine the mode or the most frequent response

void mode(int freq[], const int answer[])
{
    // Delcare and initialize variables
    
    int rating; // Counter for accessing elements 1-9 of freq array
    int j; // Counter for summerizing elements 0-98 of array answer
    int h; // Counter for displaying histograms of elements in array freq
    int largest = 0; // represents the larges frequency
    int modeValue = 0;  // Represents most frequent response

    // Print title
    
    printf("\n%s\n%s\n%s\n",
           "********", " Mode", "********");

    // Inialize freq array
    
    for(rating = 1; rating <= 9; rating++)
    {
        freq[rating] = 0;
    }

    // Summerize frequencies
    
    for(j = 0; j < SIZE; j++)
    {
        ++freq[answer[j]];
    }

    // Output header for result columns
    
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Reponse", "Frequency", "Histogram",
           "1   1    2    2", "5    0    5    0    5");

    // Output results
    
    for(rating = 1; rating <= 9; rating++)
    {
        printf("%8d%11d         ", rating, freq[rating]);

        // Keep track of mode and largest frequency value
        
        if (freq[rating] > largest)
        {
            largest = freq[rating];
            modeValue = rating;
        }

        // Output histogram bar representing frequency value
        
        for (h = 1; h <= freq[rating]; h++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    printf("The mode is the most frequency valeue.\n"
           "For this run the mode is %d which occured"
           " %d times.\n", modeValue, largest);
}
//  Sort the array using bubble sort

void bubbleSort(int a[])
{
    // Declare and initialize variables
    
    int pass; // Loop counter for number of passes
    int j; // Loop counter for comparison
    int hold; // Dummy variable to hold value

    // Loop to control number of passes
    
    for (pass = 1; pass < SIZE; pass++)
    {
        // Loop to control number of comparisons per pass
        
        for (j = 0; j < SIZE; j++)
        {
            // Swap elements if out of order
            if (a[j] > a[j+ 1])
            {
                hold =  a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }

}

// Output the array contents 20 values per row

void printArray(const int a[])
{
    // Declare and iniitalize variables
    
    int j; // Loop counter

    // Output array contents
    
    for (j = 0; j < SIZE; j++)
    {
        if (j % 20 == 0)
        {
            printf("\n");
        }

        printf("%2d", a[j]);
    }
}
