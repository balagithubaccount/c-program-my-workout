// To display the multiplication table of a given integer.

#include <stdio.h>
int main()
{
    int n;
    printf("Input a table number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, n, i * n);
    }
    return 0;
}

/*
Sample Output:

Input a table number: 8
1 x 8 = 8
2 x 8 = 16
3 x 8 = 24
4 x 8 = 32
5 x 8 = 40
6 x 8 = 48
7 x 8 = 56
8 x 8 = 64
9 x 8 = 72
10 x 8 = 80

*/