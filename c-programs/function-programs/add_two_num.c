
// Write a C program to add two numbers,  and to show the simple structure of a function.

#include <stdio.h>
int add(int n1, int n2);
void main()
{
   int a, b;
   printf("Enter the First number: ");
   scanf("%d", &a);
   printf("Enter the Second number: ");
   scanf("%d", &b);
   printf("The Total is: %d\n", add(a, b));
}
int add(int n1, int n2)
{
   int sum;
   sum = n1 + n2;
   return sum;
}

/*
Output:

Enter the First number: 5
Enter the Second number: 7
The Total is: 12
*/