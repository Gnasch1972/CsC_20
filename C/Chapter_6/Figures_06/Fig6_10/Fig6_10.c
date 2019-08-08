// Fig 6.10: Fig6_10.c
// Treating character arrays as strings

#include<stdio.h>

int main(void)
{
    // Declare and initialize variable
    
    char string1[20];
    char string2[] = "string literal";
    int i; // counter

    // Get string input from user
    printf("Enter a string: ");
    scanf("%s", string1); 

    // Output strings
    
    printf("string1 is: %s\nstring2 is: %s\n"
            "string1 with spaces between characters is:\n",
            string1, string2);

    // Output separated string
    for(i =0; string1[i] != '\0'; i++)
        printf("%c ", string1[i]);

    printf("\n");

    return 0;
}
