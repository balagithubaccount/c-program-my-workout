// Write a c program to find the perfect numbers within a given number of range.

#include <stdio.h>
void main()
{
  int x, y, i, j, sum = 0;
  printf("Input the starting range or number: ");
  scanf("%d", &x);
  printf("Input the ending range or number: ");
  scanf("%d", &y);
  printf("The perfect number within the given range : ");
  for (i = x; i <= y; i++)
  {
    sum = 0;
    for (j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        sum = sum + j;
      }
    }
    if (sum == i)
    {
      printf("%d ", i);
    }
  }
  printf("\n");
}

/*
Sample Output:

Input the starting range or number: 1
Input the ending range or number: 500
The perfect number within the given range : 6 28 496 

*/