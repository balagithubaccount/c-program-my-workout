// Write a C program to swap three elements using call by reference.

#include <stdio.h>
void swap(int *p1, int *p2, int *p3)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = temp;
} 
int main()
{
    int a, b, c;
    printf("Input three integer values: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Before swapping a = %d, b = %d, c = %d\n", a, b, c);
    swap(&a, &b, &c);

    printf("After swapping a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

/*
Sample Output:

Input three integer values: 6  7  9
Before swapping a = 6, b = 7, c = 9
After swapping a = 7, b = 9, c = 6

*/