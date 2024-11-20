// sum of series x-x^3+x^5-x^7+.....

#include <stdio.h>
void main()
{
  int n, x, a, i, c, j = 1, sum = 0, count = 0;
  printf("Input the x value: ");
  scanf("%d", &x);
  printf("Input the number of terms: ");
  scanf("%d", &n);

  for (a = 1; a <= n; a++)
  {
    c = 1;
    for (i = 1; i <= j; i++)
    {
      c = c * x;
    }
    j += 2;
    count++;
    if (count % 2 != 0)
    {
      c = 1 * c;
    }
    else
    {
      c = (-1) * c;
    }
    sum = sum + c;
    printf("%d\n", c);
  }
  printf("The sum = %d\n", sum);
}

/*
Sample Output:

bala@bala-Lenovo-E41-25:~/Documents/Questions/115-Solution/loop-programs$ ./output
Input the x value: 2
Input the number of terms: 5
2
-8
32
-128
512
The sum = 410

*/