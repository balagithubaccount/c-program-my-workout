//  Write a program in C to print all permutations of a given string using pointers.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[3] = "ABC";
    int n = strlen(str);
    int count = 0;

    //'str' stores the address of the first character ('a').

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                for (int k = 0; k < n; k++)
                {
                    if (k != i && k != j)
                    {
                        count++;
                        printf("%c%c%c\t", *(str + i), *(str + j), *(str + k));
                    }
                }
            }
            if (count % 2 == 0)
                printf("\n");
        }
    }
    printf("\nTotal number of permutations is: %d (%d!)\n", count, n);
}

/*
Sample Output:

ABC     ACB
BAC     BCA
CAB     CBA


Total number of permutations is: 6 (3!)

*/