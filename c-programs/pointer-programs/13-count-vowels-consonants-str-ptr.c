// Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
int cnt_vowel(char *ch)
{
    int count;
    for (count = 0; *ch != '\0'; ch++)
    {
        if (*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u' || *ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U')
            count++;
    }

    return count;
}
int cnt_consonant(char *ch)
{
    int count;
    for (count = 0; *ch != '\0'; ch++)
    {
        if (((*ch >= 65 && *ch <= 90) || (*ch >= 97 && *ch <= 122)) && (*ch != 'a' && *ch != 'e' && *ch != 'i' && *ch != 'o' && *ch != 'u' && *ch != 'A' && *ch != 'E' && *ch != 'I' && *ch != 'O' && *ch != 'U'))
            count++;
    }

    return count;
}
int main()
{
    char str[100];
    printf("Input a string: ");
    scanf(" %[^\n]", str);

    printf("\nNumber of Vowels: %d\n", cnt_vowel(str));
    printf("\nNumber of Consonants: %d\n", cnt_consonant(str));

    return 0;
}


/*
Sample Output: 

Input a string: HelloWorld

Number of Vowels: 3

Number of Consonants: 7
*/