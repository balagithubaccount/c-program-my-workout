// Write a c program to check whether a given number is a perfect number or not.

#include <stdio.h>
void main()
{
  int x, i, sum = 0;
  printf("Input the integer number: ");
  scanf("%d", &x);
  printf("The positive divisors are:\n");
  for (i = 1; i < x; i++)
  {
    if (x % i == 0)
    {
      printf("%d ", i);
      sum = sum + i;
    }
  }
  printf("\nThe sum of divisors : %d\n", sum);
  if (sum == x)
  {
    printf("So, the number is perfect.\n");
  }
  else
  {
    printf("So, the number is not perfect.\n");
  }
}
/*
Sample Output:

Input the integer number: 278
The positive divisors are:
1 2 139 
The sum of divisors : 142
So, the number is not perfect.

*/