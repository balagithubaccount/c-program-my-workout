// Write a C program to sort an array using Pointer.

#include <stdio.h> 
int main()
{
    int size, temp;
    printf("Input size of array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", (arr + i));
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("After sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", *(arr + i));
    }
    printf("\n");
    return 0;
}

/*
Sample Output:

Input size of array: 5
Element 1: 5
Element 2: 1
Element 3: 4
Element 4: 2
Element 5: 8
After sorted array is: 1  2  4  5  8

*/