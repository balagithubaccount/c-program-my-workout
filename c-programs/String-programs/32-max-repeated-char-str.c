// Write a C programming to find the maximum repeated character in a given string.

#include <stdio.h>
int repeated_char(char str[])
{
    int count, max = 0;
    char var;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && str[j] != ' ')
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            var = str[i];
        }
    }
    printf("The Maximum repetitive character in \"%s\" is: %c\n", str, var);
    return max;
}
int main()
{
    char string[100];
    printf("Input a string: ");
    scanf(" %[^\n]", string);
    int n = repeated_char(string);
    printf("Count is: %d\n", n);
    return 0;
}

/*
Sample Output:

Input a string: this is test string
The Maximum repetitive character in "this is test string" is: t
Count is: 4

*/