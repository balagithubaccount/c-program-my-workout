// Write a C program to store n elements in an array and print the elements using pointer.

#include <stdio.h>
void print_arr(int *ptr, int size)
{
    printf("Given array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}
int main()
{
    int n;

    printf("Input size of an array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    print_arr(arr, n);
    printf("\n");

    return 0;
}

/*
Sample Output:

Input size of an array: 10
Element 1: 9
Element 2: 8
Element 3: 7
Element 4: 6
Element 5: 5
Element 6: 4
Element 7: 3
Element 8: 2
Element 9: 1
Element 10: 0
Given array is: 9 8 7 6 5 4 3 2 1 0 

*/
