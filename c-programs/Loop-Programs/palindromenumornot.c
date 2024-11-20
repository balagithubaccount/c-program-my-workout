// 38. to check whether a number is a palindrome or not.

#include <stdio.h>
void main()
{
  int num, x, r, sum = 0;
  printf("Input the number: ");
  scanf("%d", &num);
  for (x = num; num != 0; num = num / 10)
  {
    r = num % 10;
    sum = sum * 10 + r;
  }
  if (sum == x)
  {
    printf("%d is a palindrome number.\n", x);
  }
  else
  {
    printf("%d is not a palindrome number.\n", x);
  }
}

/*
Sample Output:

Input the number: 12321
12321 is a palindrome number.

*/