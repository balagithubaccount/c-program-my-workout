//Write a C program to read a string through keyboard and sort it using bubble sort depends only first character .

#include <stdio.h>
int n=100;
void strcopy(char* ptr2, char* ptr1)
{
    for(int i=0; *ptr1!='\0'; ptr1++)
    {
        *ptr2=*ptr1;
        ptr2++;
    }
    *ptr2='\0';
}

void bubble_swap(char str1[], char str2[])
{
    char temp[n];
    strcopy(temp,str1);
    strcopy(str1,str2);
    strcopy(str2,temp);
}

int main()
{
    int size,i,j=0,bubble;
    printf("Input the number of Strings: ");
    scanf("%d",&size);
    char string[size][n];
    for(i=0; i<size; i++)
    {
        printf("Input String-%d: ",i+1);
        scanf(" %[^\n]",string[i]);
    }
    printf("\nGiven Strings are:\n");
    for(i=0; i<size; i++)
    {
        printf("%s\n",string[i]);
    }  
    printf("\n");
    Again:
    bubble=0;
    for(i=0; (i<size) && (i+1 <size); i++)
    {
        if((string[i][j]) > (string[i+1][j]))
        {
            bubble++;
            bubble_swap(string[i],string[i+1]);
        }
    }
    if(bubble!=0)
    {
        goto Again;
    }
    printf("The Strings appears After sorting:\n\n");
    for(i=0; i<size; i++)
    {
        printf("%s\n\n",string[i]);
    }

    return 0;
}

/*
Sample Output:

Input the number of Strings: 3        
Input String-1: zero
Input String-2: two
Input String-3: one

Given Strings are:
zero
two
one

The Strings appears After sorting:

one

two

zero

*/