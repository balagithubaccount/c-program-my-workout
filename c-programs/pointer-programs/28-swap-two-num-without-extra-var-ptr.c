// Write a C program to swap two numbers without using a third variable.

#include <stdio.h>
int main()
{
    int x, y;
    int *X, *Y;
    X = &x, Y = &y;

    printf("Input the value 'x': ");
    scanf("%d", X);

    printf("Input the value 'y': ");
    scanf("%d", Y);

    printf("\nBefore Swap x = %d, y = %d\n", *X, *Y);

    *Y = *Y + *X;
    *X = *Y - *X;
    *Y = *Y - *X;

    printf("After Swap x = %d, y = %d\n", *X, *Y);

    return 0;
}

/*
Sample Output:

Input the value 'x': 6
Input the value 'y': 4

Before Swap x = 6, y = 4
After Swap x = 4, y = 6

*/