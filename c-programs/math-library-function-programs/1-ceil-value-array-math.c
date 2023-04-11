// Write a C program to find the ceiling value of the array elements.

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
        array[i] = ceil(array[i]);

    printf("\nOutput array elements are:\n");
    for (int i = 0; i < size; i++)
        printf("%.0f  ", array[i]);

    printf("\n");
    return 0;
}
/*
Sample Output:

Input the array size: 2
Input the array elements:
Input the element - 1: 16.87
Input the element - 2: 74.35

Given Array:
16.87  74.35
Output array elements are:
17  75
*/