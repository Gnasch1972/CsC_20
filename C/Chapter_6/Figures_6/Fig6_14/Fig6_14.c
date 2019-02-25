// Fig 6.14: Fig6_14.c
// Demonstrates the const type qualifier with arrays

#include<stdio.h>

void tryToModifyArray(const int b[]); // Function prototype

int main(void)
{
    int a[] = {10, 20 , 30}; // Initialize
    
    tryToModifyArray(a);

    printf("%d %d %d\n", a[0], a[1], a[2]);

    return 0;
}

// Function: tryToModify(int b), array b is const so it cannont be modified

void tryToModifyArray(const int b[])
{
    b[0] /= 2; // ERROR!
    b[1] /= 2; // ERROR!
    b[2] /= 2; // ERROR!
}
