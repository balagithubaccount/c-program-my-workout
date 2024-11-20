// Write a C program to sum of n elements of an 2D array using pointer.

#include <stdio.h>
int size, sum;
int get_and_sum(int (*arr)[size])
{

    printf("Input the %d elements: \n", size * size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", (*(arr + i) + j));
            sum = sum + *(*(arr + i) + j);
        }
    }

    printf("Given array elements are:\n");
    for (int *ptr = &arr[0][0]; ptr <= &arr[size - 1][size - 1]; ptr++)
    {
        printf("%d\t", *ptr);
    }
    return sum;
}
int main()
{
    printf("Input the 2D array size: ");
    scanf("%d", &size);

    int arr[size][size];

    int sum = get_and_sum(arr);
    printf("\nSum of the 2D array elements are: %d\n", sum);
}
/*
Sample Output:

Input the 2D array size: 3
Input the 9 elements:
1
2
3
4
5
6
7
8
9
Given array elements are:
1       2       3       4       5       6       7       8       9
Sum of the 2D array elements are: 45

*/