//Write a C program to count the total number of words in a string.

#include <stdio.h>
void main()
{
    char string[500];
    int i,words=0;
    printf("Input the string: ");
    fgets(string,sizeof(string),stdin);
    printf("Given string: %s",string);
    for( i=0; string[i]!='\0'; i++)
    {
        if(string[i]==32)     //32 is the ASCII value of the 'space'
        {
            words++;
        }
    }
    if(string[i]=='\0' && string[i-1]!=32){
        words++;
    }
    printf("Total number of words in the string is: %d\n",words);
}

/*
Sample Output:

Input the string: welcome to the C-Programming language.
Given string: welcome to the C-Programming language.
Total number of words in the string is: 5
*/