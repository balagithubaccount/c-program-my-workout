// Write a C program to find the square root of a given value.

#include <stdio.h>
#include <math.h>

int main()
{
    double value, result;
    printf("Input the value for to find square root: ");
    scanf("%lf", &value);
    result = sqrt(value);
    printf("The Square root of %.3lf is %.2lf\n", value, result);
    return 0;
}

/*
Sample Output:

Input the value for to find square root: 49
The Square root of 49.000 is 7.00

Sample Output:

Input the value for to find square root: 16
The Square root of 16.000 is 4.00

*/