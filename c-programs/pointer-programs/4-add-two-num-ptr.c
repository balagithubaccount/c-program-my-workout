// Write a C program to add two numbers using pointers.

#include <stdio.h>
int main()
{
    float fno, sno;
    float *ptr, *qtr;
    
    ptr = &fno, qtr = &sno;

    printf("Input value for fno: ");
    scanf("%f", ptr);

    printf("Input value for sno: ");
    scanf("%f", qtr);

    printf("\nSum is: %.3f\n", (*ptr + *qtr));
    return 0;
}

/*
Sample Output:

Input value for fno: 5
Input value for sno: 6

Sum is: 11.000

*/