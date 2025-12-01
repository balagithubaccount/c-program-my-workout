//  Write a program in C to find the largest element using Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>

void get_element_find_large_element(int *ptr, int size)
{
    int large = -1;
    if (ptr == NULL)
    {
        printf("Memory is not allocated.\n");
        exit(0);
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            printf("Element %d: ", i +1);
            scanf("%d",&ptr[i]);
            if(large < ptr[i])
            {
                large = ptr[i];
            }
        }
        printf("Largest Element is: %d\n", large);
    }
}
int main()
{
    int n;
    printf("Input total number of elements: ");
    scanf("%d", &n);

    get_element_find_large_element((int *)malloc(n * sizeof(int)), n);
}

/*
Sample Output:

Input total number of elements: 5
Element 1: 5
Element 2: 7
Element 3: 2
Element 4: 9
Element 5: 8
Largest Element is: 9

*/