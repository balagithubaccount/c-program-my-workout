// Write a C program to find the floor value of the array elements.

#include <stdio.h>
#include <math.h>

int main()
{
    int size;
    printf("Input the array size: ");
    scanf("%d", &size);
    float array[size];

    printf("Input the array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Input the element - %d: ", i + 1);
        scanf("%f", &array[i]);
    }

    printf("\nGiven Array: \n");

    for (int i = 0; i < size; i++)
        printf("%.2f  ", array[i]);

    for (int i = 0; i < size; i++)
        array[i] = floor(array[i]);

    printf("\nOutput array elements are:\n");
    for (int i = 0; i < size; i++)
        printf("%.0f  ", array[i]);

    printf("\n");
    return 0;
}
/*
Sample Output:

Input the array size: 3
Input the array elements:
Input the element - 1: 1.999
Input the element - 2: 3.14
Input the element - 3: 9.999

Given Array: 
2.00  3.14  10.00  
Output array elements are:
1  3  9 
*/