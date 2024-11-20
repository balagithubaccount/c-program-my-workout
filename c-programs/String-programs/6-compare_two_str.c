//Write a C program to compare two strings without using string library functions.

#include <stdio.h>
int strcmpr(char str1[], char str2[])
{
    int len1,len2;
    len1 = stringlen(str1);
    len2 = stringlen(str2);
    if(len1!=len2)
    {
        return 1;
    }
    else
    {
        for(int i=0; i<len1; i++)
        {
            if(str1[i]!=str2[i])
            {
                return 1;
            }
        }
        return 0;
    }
}
int stringlen(char str[])
{
    int len =0;
    for(int i=0; str[i]!='\0'; i++)
    {
       len++;  
    }
    return len;
}
int main()
{
    int temp;
    char string1[100],string2[100];

    printf("Input the 1st String: ");
    fgets(string1,sizeof(string1),stdin);

    printf("Input the 2nd String: ");
    fgets(string2,sizeof(string2),stdin);

    printf("String-1: %s",string1);
    printf("String-2: %s",string2);
    temp = strcmpr(string1,string2);
    if(temp==0)
    {
        printf("Strings are 'Equal'.\n");
    }
    else
    {
        printf("Strings are 'Not Equal'.\n");
    }
}

/*
Sample Output:1

Input the 1st String: aabbcc
Input the 2nd String: abcdef
String-1: aabbcc
String-2: abcdef
Strings are 'Not Equal'.


Sample Output:2

Input the 1st String: aabbcc
Input the 2nd String: aabbcc
String-1: aabbcc
String-2: aabbcc
Strings are 'Equal'.
*/