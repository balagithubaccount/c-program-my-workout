// To display the cube of the number upto given an integer.

#include <stdio.h>
int main()
{
    int start, end;
    printf("Starting number: ");
    scanf("%d", &start);
    printf("Ending number: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++)
    {
        printf("cube of %d is : %d\n", i, (i * i * i));
    }
    return 0;
}

/*

Sample Output:

Starting number: 1
Ending number: 9
cube of 1 is : 1
cube of 2 is : 8
cube of 3 is : 27
cube of 4 is : 64
cube of 5 is : 125
cube of 6 is : 216
cube of 7 is : 343
cube of 8 is : 512
cube of 9 is : 729
*/