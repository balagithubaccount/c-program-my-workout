// Write a C program to print the elements of an array in reverse order.

#include <stdio.h>
int main()
{
    int size;

    printf("Input array size: ");
    scanf("%d", &size);

    int arr[size], *ptr = &arr[size - 1];

    for (int i = 0; i < size; i++)
    {
        printf("element %d: ", i + 1);
        scanf("%d", (i + arr));
    }

    printf("Array Elements in reverse order: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", *ptr--);
    }
    printf("\n");
    return 0;
}
/*
Sample Output:

Input array size: 10
element 1: 10
element 2: 9
element 3: 8
element 4: 7
element 5: 6
element 6: 5
element 7: 4
element 8: 3
element 9: 2
element 10: 1
Array Elements in reverse order: 1  2  3  4  5  6  7  8  9  10 

*/