//-----------------------------------------------------------------------------
// Fig 6.22: Fig6_22.c - Double subscripted array example
//-----------------------------------------------------------------------------

#include<stdio.h>
#define STUDENTS 3
#define EXAMS 4

// Function prototypes

int minumum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grader[][EXAMS], int pupils, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grader[][EXAMS], int pupils, int tests);

int main(void)
{
    // Variable initialization
    
    int student;  // student counter
    const int studentGrades[STUDENTS][EXAMS] = {{77, 68, 86 ,73},
                                                {96, 87, 89, 78},
                                                {70, 90, 86, 81}};
   
    // Output array studentGrades
    printArray(studentGrades, STUDENTS, EXAMS);

    // Determine smallest and largest grade values
    
   printf("\n\nLowest grade: %d\nHighest grade: %d\n",
            minumum(studentGrades, STUDENTS, EXAMS),
            maximum(studentGrades, STUDENTS, EXAMS));

    // Calculate average grade for each student
    
    for(student = 0; student < STUDENTS; student++)
    {
        printf("The average for student %d is %.2f\n",
                student, average(studentGrades[student], EXAMS));
    }

    return 0;
}

//-----------------------------------------------------------------------------
// Function: minumum - find minimum grade
//-----------------------------------------------------------------------------

int minumum(const int grades[][EXAMS], int pupils, int tests)
{
    // Variable declaration
    int i; // Student counter
    int j; // exam counter
    int lowGrade = 100;  // Initialization to highest possible grade

    // Loop through rows of grades
    
    for (i =0; i < pupils; i++)
    {
        for(j = 0; j < tests; j++)
        {
            if(grades[i][j] < lowGrade)
            {
                lowGrade = grades[i][j];
            }
        }
    }

    return lowGrade;
}

//-----------------------------------------------------------------------------
// Function: maximum - find maximum grade
//-----------------------------------------------------------------------------

int maximum(const int grades[][EXAMS], int pupils, int tests)
{
    int i; // student counter
    int j; // exam counter
    int highGrade = 0;  // initialize to lowest possible grade

    // Loop through rows of grades
    
    for(i = 0; i < pupils; i++)
    {
        // Loop through colums of grades
        
        for(j = 0; j< tests; j++)
        {
            if (grades [i][j] > highGrade)
            {
                highGrade = grades[i][j];
            }
        }
    }

    return highGrade;
}

//-----------------------------------------------------------------------------
// Function: average - determine average grade for a particular student
//-----------------------------------------------------------------------------

double average(const int setOfGrades[], int tests)
{
    int i; // exam counter
    int total = 0; // sum of test grades

    // Total all grades for one student
    for (i = 0; i < tests; i++)
    {
        total += setOfGrades[i];
    }
    
    return (double) total / tests;

}

//-----------------------------------------------------------------------------
// Function: printArray - print the array
//-----------------------------------------------------------------------------

void printArray(const int grades[][EXAMS], int pupils, int tests)
{
    int i; // student counter
    int j; // exam counter


    // Output column heads
    
    printf("                 [0]  [1]  [2]  [3]");


    // Output grades in tabular format
    
    for (i =0; i < pupils; i++)
    {
        // Output label for row
        
        
        printf("\nstudendGrades[%d] ", i);

        // Output grades for one student
        
        for(j = 0; j < tests; j++)
        {
            printf("%-5d", grades[i][j]);
        }
    }
}

