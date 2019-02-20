//-----------------------------------------------------------------------------
// Program: EX5_45.c - Testing Math Library Functions
// Programmer: Joseph Cunningham
// Class: CsC_20 - c
// Date: 2/20/19
//
// This program tests the math.h library functions
// ----------------------------------------------------------------------------

#include<stdio.h>
#include<math.h>

const double PI = 3.14159265359;

int main(void)
{
    for (int count = 1; count < 14; count++)
    {
        switch(count){
            case 1: 
                printf("fun        ");

                for(int loop = 1; loop < 6; loop++)
                {
                    printf("%10d ", loop);
                }
                break;

            case 2: 
                printf("\n\nsqrt()     ");
                for(int loop = 1; loop < 6; loop++)
                {
                    printf("%10.2lf ", sqrt(loop));
                }
                break;

            case 3: 
                printf("\nexp()      ");
                for(int loop = 1; loop < 6; loop++)
                {
                    printf("%10.2lf ", exp(loop));
                }
                break;

            case 4:
                printf("\nlog()      ");
                for(int loop = 1; loop < 6; loop++)
                {
                    printf("%10.2lf ", log(loop));
                }
                break;

            case 5: 
                printf("\nlog10()    ");
                for (int loop = 1; loop < 6; loop++)
                {
                    printf("%10.2lf ", log10(loop));
                }
                break;

            case 6:
                printf("\npow( 2,x ) ");
                for (int loop = 1; loop < 6; loop++)
                {
                    printf("%10.2lf ", pow(2,loop));
                }
                break;

            case 7:
                printf("\n\nfunc       ");
                for (double loop2 = -1.5; loop2 < 3.0; loop2 += 1.1)
                {
                    printf("%10.2lf ", loop2);
                }
                break;

            case 8:
                printf("\nfabs()     ");
                for (double loop2 = -1.5; loop2 < 3.0; loop2 += 1.1)
                {
                    printf("%10.2lf ", fabs(loop2));
                }
                break;

            case 9:
                printf("\nceil()     ");
                for (double loop2 = -1.5; loop2 < 3.0; loop2 += 1.1)
                {
                    printf("%10.2lf ", ceil(loop2));
                }
                break;

            case 10:
                printf("\nfloor()    ");
                for (double loop2 = -1.5; loop2 < 3.0; loop2 += 1.1)
                {
                    printf("%10.2lf ", floor(loop2));
                }
                break;

            case 11:
                printf("\nsin()      ");
                for (double loop2 = -1.5; loop2 < 3.0; loop2 += 1.1)
                {
                    printf("%10.2lf ", sin(loop2));
                }
                break;

            case 12:
                printf("\ncos()      ");
                for(double loop2 = -1.5; loop2 < 3.0; loop2 += 1.1)
                {
                    printf("%10.2lf ", cos(loop2));
                }
                break;

            case 13:
                printf("\ntan()      ");
                for(double loop2 = -1.5; loop2 < 3.0; loop2 += 1.1)
                {
                    printf("%10.2lf ", tan(loop2));
                }
                break;
        }
    }

    return 0;
}
