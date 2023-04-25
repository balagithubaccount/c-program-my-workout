// Write a C program to find the exponential(e^x) of the given value.

#include <stdio.h>
#include <math.h>

int main()
{
    float giv_value;
    printf("Input the value: ");
    scanf("%f",&giv_value);
    printf("exp(%f) is: %f\n",giv_value,exp(giv_value));
    return 0;
}

/*
Sample Output:

Input the value: 3
exp(3.000000) is: 20.085537

*/