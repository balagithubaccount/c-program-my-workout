// Write a program in C to print only the string before new line character. is print() will only print line one, because the newline character is not printable.

#include <stdio.h>
void print_before_newline(char *ptr)
{
    while (*ptr != 10)
    {
        printf("%c", *ptr++);
    }
}
int main()
{
    char string[] = "The quick brown fox \n jumps over the \n lazy dog.";

    print_before_newline(string);
    printf("\n");
    return 0;
}

/*
Sample Output:
char string[]="The quick brown fox \n jumps over the \n lazy dog.";
The quick brown fox

*/