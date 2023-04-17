// Write a C program to find log(base 10) value for the given value.

#include <stdio.h>
#include <math.h>

int main()
{
    double v, log_v;

    printf("Input the Value: ");
    scanf("%lf", &v);

    log_v = log10(v);
    printf("\nlog(%lf) = %lf\n", v, log_v);

    return 0;
}


/*
Sample Output:

Input the Value: 24

log(24.000000) = 1.380211

*/