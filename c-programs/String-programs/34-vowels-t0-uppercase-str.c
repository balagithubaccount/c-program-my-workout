//Write a C programming to convert vowels into upper case character in a given string. 

#include <stdio.h>
void vowel_to_uppercase(char* ptr)
{
    while(*ptr != '\0')
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            *ptr-=' ';
        }
        ptr++;
    }
}
int main()
{
    char string[50];
    printf("Input a String: ");
    scanf(" %[^\n]",string);
    printf("\nThe Original string is:\n%s\n\n",string);
    vowel_to_uppercase(string);
    printf("After converting vowels into uppercase the string becomes: \n%s\n",string);

    return 0;
}

/*
Sample Output:

Input a String: This is test string only.

The Original string is:
This is test string only.

After converting vowels into uppercase the string becomes: 
ThIs Is tEst strIng Only.

*/