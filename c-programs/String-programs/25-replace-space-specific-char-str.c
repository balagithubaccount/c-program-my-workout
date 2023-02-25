// Write a C program to replace the spaces of a string with a specific character.

#include <stdio.h>
void replace_specific_char(char* ptr,char var)
{
    while(*ptr!='\0') 
    {
        if(*ptr == 32)
        {
            *ptr = var;
        }
        ptr++;
    }
}
int main()
{
    char string[100], var;
    printf("Input a String: ");
    scanf(" %[^\n]",string);
    printf("Input a replacing character: ");
    scanf(" %c",&var);

    printf("\nThe given string is:\n%s\n\n",string);
    printf("The replacing character is: %c\n\n",var);

    replace_specific_char(string,var);

    printf("After replacing the space with %c the new string is:\n\n%s\n\n",var,string);

    return 0;
}

/*
Sample Output:

Input a String: Be glad to see the back of Input replace character.
Input a replacing character: *

The given string is:
Be glad to see the back of Input replace character.

The replacing character is: *

After replacing the space with * the new string is:

Be*glad*to*see*the*back*of*Input*replace*character.

*/