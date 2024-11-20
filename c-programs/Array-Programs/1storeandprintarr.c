// 1. Write a C program to get array elements store and print

#include <stdio.h>
void main()
{
  int n, i;
  printf("Enter the array size: ");
  scanf("%d", &n);
  int array[n];
  printf("Enter the %d values: ", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }
  printf("You Entered array is:\n");
  for (i = 0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
}

/*
Output:

Enter the array size: 6
Enter the 6 values: 6 5 4 3 2 1
You Entered array is:
6 5 4 3 2 1

*/