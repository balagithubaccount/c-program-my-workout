//Write a C program to extract a substring from a given string.

#include <stdio.h>
#include <string.h>
void main()
{
    char string[100],substr[100];

    printf("Input the string: ");
    fgets(string,sizeof(string),stdin);

    int start,len,strl,i=0;
    printf("Input the position to start extraction: ");
    scanf("%d",&start);
    printf("Input the length of substring: ");
    scanf("%d",&len);
    strl=strlen(string);
            // printf("str len main=%d\n",strl);
    if((start-1)+(len-1) <= (strl-2))
    {
       while(i<len)
       {
        substr[i]=string[start+i-1];
        i++;
       }
       substr[i]='\0';
       printf("Substring is: \"%s\"\n",substr);
    }
    else
    {
       printf("Given substring length is does not exist.\n");
    }
}

/*
Sample Output:

Input the string: this is test string
Input the position to start extraction: 9
Input the length of substring: 4
Substring is: "test"

*/