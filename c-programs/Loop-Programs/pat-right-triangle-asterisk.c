// To display the pattern like right angle triangle using an asterisk.
/*
pattern like
input 4

*
**
***
****

*/

#include <stdio.h>
int main()
{
    int row;
    printf("Input number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*
Sample Output:

Input number of rows: 5
*
**
***
****
*****

*/