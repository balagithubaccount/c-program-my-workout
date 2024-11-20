//  Write a program in C to find the factorial of a given number using pointers.

#include <stdio.h>

int find_fact(int *p)
{
  int fact = 1;
  for (; *p > 0; (*p)--)
  {
    fact = fact * (*p);
  }
  return fact;
}

int main()
{
  int n;
  int* ptr = &n;

  printf("Input a number: ");
  scanf("%d",ptr);

  printf("The Factorial of %d is: %d\n",*ptr, find_fact(&n));
} 

/*
Sample Output:

Input a number: 4
The Factorial of 0 is: 24

*/
