// to determine whether a given number is prime or not.

#include <stdio.h>
void main()
{
  int i, num, count = 0;
  printf("Input the number: ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    printf("%d is a prime number.\n", num);
  }
  else
  {
    printf("%d is not a prime number.\n", num);
  }
}

/*
Sample Output:

Input the number: 34
34 is not a prime number.

*/