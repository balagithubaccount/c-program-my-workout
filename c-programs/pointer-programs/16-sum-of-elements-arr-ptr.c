// Write a C program to compute the sum of all elements in an array using pointers.

#include <stdio.h>
int main()
{
    int size, sum = 0;
    printf("Input array size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", (arr + i));
        sum = sum + *(arr + i);
    }
    printf("Sum of all elements is: %d\n",sum);
    return 0;
}

/*
Sample Output:

Input array size: 5
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 6
Sum of all elements is: 20

*/