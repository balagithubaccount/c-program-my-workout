// To make such a pattern like right angle triangle with a number which will repeat a number in a row.

/*
the pattern like
input row is 5
1
22
333
4444
55555
*/

#include <stdio.h>
int main()
{
    int row;
    printf("Input the number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for(int j=1; j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

/*
Sample Output:

Input the number of rows: 8
1
22
333
4444
55555
666666
7777777
88888888

*/