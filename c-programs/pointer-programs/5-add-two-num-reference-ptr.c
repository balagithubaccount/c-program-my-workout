// Write a C program to add numbers using call by reference.

#include <stdio.h>
int add(int *p1, int *p2)
{
    return (*p1 + *p2);
}

int main()
{
    int a,b;
    printf("Input two integer values: ");
    scanf("%d%d",&a,&b);
    printf("Sum is: %d\n",add(&a, &b));
    return 0;
}

/*
Sample Output:

Input two integer values: 5 6
Sum is: 11
  
*/