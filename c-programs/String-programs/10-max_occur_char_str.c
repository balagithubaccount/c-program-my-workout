//Write a C program to find maximum occurring character in a string.

#include <stdio.h>
int max_occur_char_str(char str[])
{
    int i,j,count,Max=0;
    char Max_char;
    for(i=0; str[i]!='\0'; i++)
    {
        count=0;
        for(j=0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j] && str[i]!=' ')
            {
                count++;
            }
        }
        if(Max<count)
        {
            Max=count;
            Max_char=str[i];
        }
    }
    printf("The Highest Frequency of character: %c",Max_char);
    return Max;
}
void main()
{
    char string[100];
    int Max;
    printf("Input the string: ");
    fgets(string,sizeof(string),stdin);
    Max=max_occur_char_str(string);
    printf("\nAppears number of times: %d\n",Max);
}

/*
Sample Output:

Input the string: sample string for highest frequency of character.    
The Highest Frequency of character: e
Appears number of times: 5
*/