//-----------------------------------------------------------------------------
// Program: EX6-10.c - Sales Commision
// Programmer: Joesph Cunningham
// Class: CsC_20 - C
// Date: 3/7/19
//
// This program prompts the user for 100 sales figures.  It then calculates the
// employee's commisior or earnings using the following equation:
//
//                  earnings = $200.00 + Sales * 0.09
//
// Then it will generate a table showing the salary spread in buckets of $100
// from $200 (base salary) to $1000.
// ----------------------------------------------------------------------------

#include<stdio.h>
#define EMPLOYEE 100
#define TIER 11

// Function prototypes

void getSales(int sales[]);
void calcEarnings(int sales[], int earning[]);
void tierSort(int earning[], int tiers[]);
void printTable(int tiers[]);

int main(void)
{
    int sales[EMPLOYEE];  // Sales numbers input by user
    int earning[EMPLOYEE];  // Calulated earnings
    int tiers[TIER] = {0}; // Dollar buckets

    // Get user input
    
    getSales(sales);

    // Calculate employee earnigns
    
    calcEarnings(sales, earning);

    // Sort earnings in into buckets
    
    tierSort(earning, tiers);

    // Print Table
    
    printTable(tiers);

    return 0;
}

//-----------------------------------------------------------------------------
// Function: getSales - get sales of emplpyees from user
// Input: int sales[] - single subscripted array of sales in dollars
// Output: none
//---------------------------------------------------------------------------

void getSales(int sales[])
{
    int employee;

    for(employee = 0; employee < EMPLOYEE; employee++)
    {
        printf("Please enter a sales number: ");
        scanf("%d", &sales[employee]);
    }
}

//-----------------------------------------------------------------------------
// Function: calcEarnings - calculates the earnings of each employee
// Input: int sales - single subscripted array with total sales
//        int earnings - single subscripted array to contain calculated earnings
// Output: None
//-----------------------------------------------------------------------------

void calcEarnings(int sales[], int earning[])
{
    int employee;

    for(employee = 0; employee < EMPLOYEE; employee++)
    {
            earning[employee] = 200.0 + (double)sales[employee] * 0.09;
    }
}

//-----------------------------------------------------------------------------
// Function: tierSort - sorts the earnings in to dollar buckets
// Input: int earning - single subscripted array containing employees commisions
//        int tier - single subscripted array to contain the frequecy of
//        commision dollar amounts
// Output: None
//-----------------------------------------------------------------------------

void tierSort(int earning[], int tier[])
{
    int employee; // employee number

    for(employee = 0; employee < EMPLOYEE; employee++)
    {
        if(earning[employee] >= 200 && earning[employee] < 1000)
        {
            ++tier[earning[employee] / 100];
        }

        else if (earning[employee] >= 1000)
        {
            ++tier[10];
        }
    }
}

//-----------------------------------------------------------------------------
// Function: printTable - prints the commision bucket table
// Input: int tier - single subscripted array containg the frequencies
// Output: table of values
// ----------------------------------------------------------------------------

void printTable(int tier[])
{
    printf("Employee Commision Buckets\n");
    printf("$200 - $299 - %d\n", tier[2]);
    printf("$300 - $399 - %d\n", tier[3]);
    printf("$400 - $499 - %d\n", tier[4]);
    printf("$500 - $599 - %d\n", tier[5]);
    printf("$600 - $699 - %d\n", tier[6]);
    printf("$700 - $799 - %d\n", tier[7]);
    printf("$800 - $899 - %d\n", tier[8]);
    printf("$900 - $999 - %d\n", tier[9]);
    printf("$1000 and over - %d\n", tier[10]);
}

