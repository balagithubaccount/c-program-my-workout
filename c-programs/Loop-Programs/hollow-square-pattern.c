// Write a C program to print Hollow Square Pattern.

#include <stdio.h>
int main()
{
    int row;
    char Char;
    printf("Inpu the number of rows: ");
    scanf("%d", &row);

    for (int c = 1; c <= 3; c++)
    {
        switch (c)
        {
        case 1:
            Char = '*';
            break;
        case 2:
            Char = '1';
            break;
        case 3:
            Char = 'A';
            break;
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < row; j++)
            {
                if (j > 0 && j < row - 1 && i != 0 && i != row - 1)
                    printf("  ");
                else
                {
                    if (Char == '*')
                        printf("%c ", Char);
                    else
                        printf("%c ", Char + j);
                }
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}

/*
Sample Output:

Inpu the number of rows: 5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 


1 2 3 4 5 
1       5 
1       5 
1       5 
1 2 3 4 5 


A B C D E 
A       E 
A       E 
A       E 
A B C D E 



*/