// pattern print floyd's triangle

#include <stdio.h>
void main()
{
  int n, i, j, p, q;
  printf("Input the number of rows: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      p = 1;
      q = 0;
    }
    else
    {
      p = 0;
      q = 1;
    }

    for (j = 1; j <= i; j++)
    {
      if (j % 2 != 0)
      {
        printf("%d", p);
      }
      else
      {
        printf("%d", q);
      }
    }
    printf("\n");
  }
}

/*

Sample output:

Input the number of rows: 7
1
01
101
0101
10101
010101
1010101

*/