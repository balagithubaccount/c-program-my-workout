// to make such a pattern like a pyramid wiht an asterisk
/*
the pattern like:
input row is 4

   *
  * *
 * * *
* * * *

*/

#include <stdio.h>
int main()
{
    int row, space;
    printf("Input the number of rows: ");
    scanf("%d", &row);
    space = row - 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = space; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        space--;
    }
    return 0;
}

/*
Sample Output:

Input the number of rows: 6
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
* * * * * * 

*/