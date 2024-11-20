// Write a C program to calculate the power without using the library function - Pointer.

#include <stdio.h>
int powr(int b, int p)
{
    int result = 1;
    for(int i = 1; i <= p; i++)
    {
        result = result * b;   
    }
    return result;
}
int main()
{
    int base_value, pow_value;
    printf("Input the base value: ");
    scanf("%d",&base_value);

    printf("Input the power value: ");
    scanf("%d",&pow_value);

    printf("\n%d^%d = %d\n",base_value, pow_value, powr(base_value, pow_value));

    return 0;
}

/*
Sample Output:

Input the base value: 2
Input the power value: 4

2^4 = 16

*/