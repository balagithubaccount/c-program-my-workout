// Write a C program to print prime numbers in between the given range.

#include <stdio.h>
void main()
{
    int i, j, count, start, end;

    int *I, *J, *ptr;
    I = &i, J = &j, ptr = &count;

    printf("Input the starting and ending range of the value: \n");
    scanf("%d%d", &start, &end);
    printf("prime numbers between %d to %d: ", start, end);

    for (*I = start; *I <= end; (*I)++)
    {
        *ptr = 0;
        for (*J = 1; *J <= *I; (*J)++)
        {
            if (*I % *J == 0)
            {
                (*ptr)++;
            }
        }
        if (*ptr == 2)
        {
            printf("%d ", *I);
        }
    }
    printf("\n");

    return 0;
}

/*
Sample Output:

Input the starting and ending range of the value:
1
50
prime numbers between 1 to 50: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

*/