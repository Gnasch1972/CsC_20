//-----------------------------------------------------------------------------
// Program: EX5_26.c - Perfect Numbers
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/18/19
//
// This program will print the  perfect numbers up to 1000.  A perfect number is
// a number which it's factors (not including itself) add up to itself.  The
// program will print the perfect number and its factors.
// ----------------------------------------------------------------------------

#include<stdio.h>

int perfect(int number); // Function prototype

int main (void)
{

    printf("Number\tFactors\n");

    for(int number = 2; number <= 10000; number++)
    {
        //printf("Number = %d\n", number);
        if (perfect(number) == 1)
        {
            printf("%d\t", number);
            for(int i = 1; i <= number; i++)    
            {
                if(number % i == 0 && number != i)
                    printf("%d ", i);
            }

            printf("\n");
        }

     }

    return 0;
}

//-----------------------------------------------------------------------------
// Function: perfect - determines if a number is perfect or not
//      if the sume of the factors not including itself == itself
// 
// number: the number to be tested
//
// returns: 1 if a perfect number, 0 if not
//-----------------------------------------------------------------------------

int perfect(int number)
{

    int factorSum = 0; // Sum of the factors

    //printf("FactorSum = %d\n", factorSum);
    for(int i = 1; i <= number; i++)
    {
       if (number % i == 0 && i != number)
       {
       
           //printf("i = %d\n", i);
           factorSum += i;
       }
    }
     //printf("FactorSum = %d\n", factorSum);

    if(factorSum == number)
        return 1;
    else
        return 0;
}

     
    
