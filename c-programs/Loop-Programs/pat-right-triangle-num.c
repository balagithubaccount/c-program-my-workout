// To display the pattern like right angle triangle triangle with a number.

/*
The pattern like:

input is 5

1
12
123
1234
12345

*/

#include <stdio.h>
int main()
{
    int row;
    printf("Input the number of rows: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

/*
Sample Output:

Input the number of rows: 7
1
12
123
1234
12345
123456
1234567

*/