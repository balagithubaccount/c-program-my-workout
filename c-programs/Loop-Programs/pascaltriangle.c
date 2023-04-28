// to display Pascal's triangle

#include <stdio.h>
void main()
{
  int row, in, space, c = 1, i, j;
  printf("Input the number of rows: ");
  scanf("%d", &row);
  space = row * 2;

  for (i = 0; i < row; i++)
  {
    for (in = 1; in <= space; in++)
    {
      printf(" ");
    }
    for (j = 0; j <= i; j++)
    {
      if (j == 0 || i == 0)
        c = 1;
      else
      {
        c = c * (i - j + 1) / j;
      }
      printf("%d   ", c);
    }
    printf("\n");
    space -= 2;
  }
}
/*
Sample output:

Input the number of rows: 5
          1   
        1   1   
      1   2   1   
    1   3   3   1   
  1   4   6   4   1
  
*/
