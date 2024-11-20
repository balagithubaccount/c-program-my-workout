// sum of the series 9+99+999+....

#include <stdio.h>
void main()
{
  int n, i, j, sum = 0, v = 9;
  printf("Input the number of Terms: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= 1; j++)
    {
      printf("%d ", v);
    }
    printf("+");
    sum = sum + v;
    v = (10 * v) + 9;
  }
  printf("\nThe sum of the series = %d\n", sum);
}
/*
Sample output:

Input the number of Terms: 5
9 +99 +999 +9999 +99999 +
The sum of the series = 111105

*/