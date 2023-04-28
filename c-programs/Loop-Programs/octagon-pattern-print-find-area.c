// Write a C program to print octagon and find the area.

#include <stdio.h>
int main()
{
    int row;
    int space;
    int i, j, k = 0;
    printf("Input the row value: ");
    scanf("%d", &row);
    printf("\n");
    space = row - 1;
    for (i = 0; i < row; i++)
    {
        for (j = space; j >= 1; j--)
        {
            printf("  ");
        }
        for (j = 0; j < row + k; j++)
        {
            printf("* ");
        }
        printf("\n");
        k += 2;
        space--;
    }
    for (i = 1; i < row; i++)
    {
        for (j = 1; j <= row + (k - 2); j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (i = 1; i < row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= row + (k - 4); j++)
        {
            printf("* ");
        }
        printf("\n");
        k -= 2;
    }

    printf("\nPerimeter of an octagon is: (8 * a): 8 x %d = %d\n", row, row * 8);

    return 0;
}

/*
Sample Output:

Input the row value: 4

      * * * *
    * * * * * *
  * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * * * * * * * *
  * * * * * * * *
    * * * * * *
      * * * *

Perimeter of an octagon is: (8 * a): 8 x 4:  32
*/