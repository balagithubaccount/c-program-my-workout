// to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <stdio.h>
void main()
{
  int n, a, i, v = 1, sum = 0;
  printf("Input the number of terms: ");
  scanf("%d", &n);
  for (a = 1; a <= 1; a++)
  {
    for (i = 1; i <= n; i++)
    {
      printf("%d+", v);
      sum = sum + v;
      v = (v * 10) + 1;
    }
    printf("\n");
  }
  printf("The sum is = %d\n", sum);
}
/*
Sample output:

Input the number of terms: 5
1+11+111+1111+11111+
The sum is = 12345

*/