// Write a C program to demonstrate how a function returns a pointer.

#include <stdio.h>
int* function(int *n1, int *n2)
{
    return (*n1 > *n2) ? n1 : n2 ;
}
int main()
{
    int numa, numb;
    printf("Enter the first number: ");
    scanf("%d",&numa);

    printf("Enter the second number: ");
    scanf("%d",&numb);

    int* result = function(&numa, &numb);

    // printf("\nLargest number is: %d\n", *result);
    printf("\nLargest number is: %d\n", *(function(&numa, &numb)));

    return 0;
}

/*
Sample Output:

Enter the first number: 5
Enter the second number: 6

Largest number is: 6

*/