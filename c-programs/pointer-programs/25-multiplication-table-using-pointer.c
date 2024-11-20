// Write a C program to print multiplication table using pointer.

#include <stdio.h>
void main()
{
    int table, terms, sol, i;

    int *p_table, *p_term, *p_sol, *ptr;

    ptr = &i;

    p_table = &table, p_term = &terms, p_sol = &sol;

    printf("Enter the table: ");
    scanf("%d", p_table);

    printf("Enter the number of terms: ");
    scanf("%d", p_term);

    printf("Table is:\n");

    for (*ptr = 1; *ptr <= *p_term; (*ptr)++)
    {
        *p_sol = (*p_table) * (i);

        printf("%d x %d = %d\n", *p_table, *ptr, *p_sol);
    }
}
/*
Sample Output:

Enter the table: 7
Enter the number of terms: 10
Table is:
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70
*/
