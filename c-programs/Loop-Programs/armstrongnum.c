// to check whether a given number is an armstrong number or not.

#include <stdio.h>
void main()
{
  int num, term, r, a, c, count = 0, sum = 0;
  printf("Input the Number: ");
  scanf("%d", &num);

  for (term = num; num != 0; num = num / 10)
  {
    count++;
    // printf("%d\n",count);
  }
  for (num = term; term != 0; term = term / 10)
  {
    r = term % 10;
    c = 1;
    for (a = 1; a <= count; a++)
    {
      c = c * r;
    }
    sum = sum + c;
  }
  if (sum == num)
  {
    printf("Your input number %d is Armstrong.\n", num);
  }
  else
  {
    printf("Your input number %d is not Armstrong number.\n", num);
  }
}
/*
Sample Output:

Input the Number: 153
Your input number 153 is Armstrong.

*/