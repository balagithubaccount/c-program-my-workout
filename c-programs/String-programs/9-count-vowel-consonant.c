//Write a C program to count total number of vowel and consonant in a string.

#include <stdio.h>
int size = 100;
void count_vowel_consonant(char str[])
{
    int vowel=0, consonant=0, temp;
    for(int i=0; str[i]!='\0'; i++)
    {
        temp=0;
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {          
            vowel++; 
            temp=1;
        }
        if((str[i]>='a' && str[i]<='z' && temp!=1) || (str[i]>='A' && str[i]<='Z' && temp!=1))
        {               
            consonant++;
            temp=0;
        }
       
    }
    printf("The total number of Vowel in the String is: %d\n",vowel);
    printf("The total number of Consonant in the String is: %d\n",consonant);
}
void main()
{
    char string[100];
    printf("Input the String: ");
    fgets(string,sizeof(string),stdin);
    count_vowel_consonant(string);
}

/*
Sample Output:

Input the String: this is a really simple sentence
The total number of Vowel in the String is: 10
The total number of Consonant in the String is: 17
*/