//Write a C program to input a string and print it.
/*
#include <stdio.h>
void printstr(char str[])
{
    printf("The string you entered is: %s\n",str);
}
void main()
{
    char str[100];
    printf("Input the string: ");
    fgets(str,sizeof(str),stdin);
    printstr(str);
}

*/
#include <stdio.h>
#include <string.h>
void main()
{
   char str1[10],str2[10];

   printf("Input a string 1: ");
   gets(str1);
   printf("Input a string 2: ");
   fgets(str2, sizeof(str2),stdin);

   printf("\nstring 1 length is: %ld\n",strlen(str1));
   printf("string 2 length is: %ld\n",strlen(str2));
   
}




/*
Sample output:

Input the string: Welcome, to 1st string program       
The string you entered is: Welcome, to 1st string program
*/