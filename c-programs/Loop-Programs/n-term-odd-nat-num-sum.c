// To display the n terms of odd natural number and their sum.

#include <stdio.h>
int main()
{
    int term;
    printf("Input the terms: ");
    scanf("%d", &term);
    int count = 1, sum = 0;
    for (int i = 1; i <= term * 2; i += 2)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("\n%d terms of odd natural numbers sum is: %d\n",term, sum);
    return 0;
}

/*
Sample Output:

Input the terms: 10
1
3
5
7
9
11
13
15
17
19

10 terms of odd natural numbers sum is: 100

*/