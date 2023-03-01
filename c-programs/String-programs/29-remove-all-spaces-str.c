//Write a program in C to read a file and remove the spaces between two words of its content.

#include <stdio.h>
#include <string.h>
void remove_spaces(char str[],int len)
{
    printf("\nThe Given string is: \n%s\n",str);
    int i,j,count = 1;
    while(count!=0)
    {
        count=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]==' ')
            {   
                count++;
                for(j=i;j<=len; j++)
                {
                    str[j]=str[j+1];
                }
            }
        }
    }
    printf("\nAfter removing the spaces the content is: \n%s\n",str);
}
int main()
{
    char string[100];
    printf("Input a String: ");
    scanf(" %[^\n]",string);
    remove_spaces(string, strlen(string));

    return 0;
}
/*
Sample Output:

Input a String: The quick brown fox jumps over the lazy dog.

The Given string is: 
The quick brown fox jumps over the lazy dog.

After removing the spaces the content is: 
Thequickbrownfoxjumpsoverthelazydog.

*/