

// Write a C program to swap two numbers using function.

#include <stdio.h>
void swap(int *num1, int *num2)
{
   int temp = *num1;
   *num1 = *num2;
   *num2 = temp;
   return 0;
}
void main()
{
   int n1, n2;
   printf("Enter the first number: ");
   scanf("%d", &n1);
   printf("Enter the second number: ");
   scanf("%d", &n2);
   printf("Before calling function num1=%d, num2=%d\n", n1, n2);
   swap(&n1, &n2);
   printf("After calling function num1=%d, num2=%d\n", n1, n2);
}

/*
Sample Output:
Enter the first number: 5
Enter the second number: 9
Before calling function num1=5, num2=9
After calling function num1=9, num2=5
*/
