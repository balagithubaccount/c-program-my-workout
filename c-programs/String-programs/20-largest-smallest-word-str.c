//Write a program in C to find the largest and smallest word in a string.

#include <stdio.h>
#include <string.h>

void min_word(char str[],int len)
{
    int i,j,count,start_index=0,end_index=len-1,small=len;
    for(i=0; str[i]!='\0' && i<len; i++)
    {
        count=0;
        if(str[i]!=' ')
        {
            count++;
            while(str[i+count] != ' ' && str[i+count] != '\0')
            {
                count++;
            }
            if(small > count )
            {
                small = count;
                start_index = i;
                end_index = i+(count-1);
            }
            i = i+count;
        }
    } 
    printf("The smallest word is: '");
    for(i=start_index; i<=end_index; i++)
    {
        printf("%c",str[i]);
    }
    printf("'\n");
}

void max_word(char str[],int len)
{
    int i,j,count,start_index=0,end_index=len-1,big=0;
    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        if(str[i]!=' ')
        {
            count++;
            while(str[i+count] != ' ' && str[i+count] != '\0')
            {
                count++;
            }
            if(big < count)
            {
                big = count;
                start_index = i;
                end_index = i+(count-1);
            }
            i = i+count;
        }
    }
    printf("The Largest word is: '");
    for(i=start_index; i<=end_index; i++)
    {
        printf("%c",str[i]);
    }
    printf("'\n");
}
void main()
{
    char string[100];
    printf("Input a String: ");
    scanf(" %[^\n]",string);
    min_word(string,strlen(string));
    max_word(string,strlen(string));
}

/*
Sample Output:

Input a String: It is a string with smallest and largest word.
The smallest word is: 'a'
The Largest word is: 'smallest'

*/