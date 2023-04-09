// Write a C program to calculate the power using the POW method - Pointer.

#include <stdio.h>
#include <math.h>

int main()
{
    int value, power, *ptr, *powr;
    ptr = &value, powr = &power;

    printf("Input the value: ");
    scanf("%d",ptr);
    
    printf("Input the power value: ");
    scanf("%d", powr);

    printf("\nMathematical representation:  %d^%d\n", value, power);
    printf("Base: %d\n", *ptr);
    printf("Exponent: %d\n", *powr);

    printf("%d^%d means %d time multiplication of %d\n", *ptr, *powr, *powr, *ptr);
    int result = pow(*ptr, *powr);

    printf("\nSolution (%d^%d) = %d\n", *ptr, *powr, result);

    return 0;
}

/*
Sample Output:

Input the value: 2
Input the power value: 5

Mathematical representation:  2^5
Base: 2
Exponent: 5
2^5 means 5 time multiplication of 2

Solution (2^5) = 32

*/