// patern print use asterisk for each row odd number of asterisks..

#include <stdio.h>
void main()
{
  int n, i, a = 1, s, j;
  printf("Input the total rows: ");
  scanf("%d", &n);
  s = n - 1;
  for (j = 1; j <= n; j++)
  {
    for (i = 1; i <= s; i++)
    {
      printf(" ");
    }
    for (i = 1; i <= a; i++)
    {
      printf("*");
    }
    a += 2;
    printf("\n");
    s--;
  }
}

/*
Sample output:

Input the total rows: 6
     *
    ***
   *****
  *******
 *********
***********

*/