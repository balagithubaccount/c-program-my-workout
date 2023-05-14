// Write a C program to print the plus-minus pattern.

#include <stdio.h>
int main()
{
    int row, i, j;
    char symbol;
    printf("Enter the row value: ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        symbol = (i % 2 == 0) ? '+' : '-';
        for (j = 1; j <= row; j++)
        {
            if (i == 1 || i == row)
            {
                symbol = '-';
            }
            printf("%c ", symbol);
            symbol = (symbol == '+') ? '-' : '+';
        }
        printf("\n");
    }
    return 0;
}

/*
Sample Output: 1

Enter the row value: 11
- - - - - - - - - - - 
+ - + - + - + - + - + 
- + - + - + - + - + - 
+ - + - + - + - + - + 
- + - + - + - + - + - 
+ - + - + - + - + - + 
- + - + - + - + - + - 
+ - + - + - + - + - + 
- + - + - + - + - + - 
+ - + - + - + - + - + 
- - - - - - - - - - - 

Sample Output: 2       

Enter the row value: 8
- - - - - - - -
+ - + - + - + -
- + - + - + - +
+ - + - + - + -
- + - + - + - +
+ - + - + - + -
- + - + - + - +
- - - - - - - -


*/