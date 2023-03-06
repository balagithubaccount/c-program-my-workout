//Write a C programming to find the length of the longest substring of a given string without repeating character. 

#include <stdio.h>
int main()
{
    char string[100];
    printf("Input a string: ");
    scanf(" %[^\n]",string);
    int i,j,k=0,len,large = 0;
      
    while(string[k]!='\0')
    {
        for(i=k; string[i] != '\0'; i++)
        {
            len=1;
            for(j=k; j<i; j++)
            {
                if(string[i]==string[j])
                {
                   goto end;
                }
                else
                {
                    len++;
                }
            }
            if(large < len)
            {
                large = len;
            }
        }
        end:
        k++;
    }
    printf("Given String is: %s\n",string);
    printf("Length of the longest substring without repeating characters: %d\n",large);

    return 0;
}

/*
Sample Output:

Input a string: thisisteststring
Given String is: thisisteststring
Length of the longest substring without repeating characters: 6

*/