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
//Pascal Triangle program in C

#include <stdio.h>

int fact(int n) //function to calculate factorial of a number
{
  int a;

  for (a = 1; n > 1; n--)
    a *= n;

  return a;
}

int combination(int n, int r)
{
  return fact(n) / (fact(n - r) * fact(r)); // using the mathematical formula of combination nCr
}

int main()
{
  int rows;
  int i, j;

  //number of rows of pascal's triangle to be printed
  printf("Enter Number of Rows: ");
  scanf("%d", &rows);

  for (i = 0; i <= rows; i++)
  {
    for (j = 0; j <= rows - i; j++)
      printf("  ");

    for (j = 0; j <= i; j++)
      printf(" %3d", combination(i, j));

    printf("\n");
  }
  return 0;
}

*/
/*
Sample output:

Input the number of rows: 5
          1   
        1   1   
      1   2   1   
    1   3   3   1   
  1   4   6   4   1
  
*/
