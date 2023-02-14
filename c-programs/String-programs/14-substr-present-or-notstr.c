//Write a C program to check whether a given substring is present in the given string.

#include <stdio.h>
#include <string.h>
int check_string_present(char str[], char substr[],int strl, int substrl )
{
   printf("Given string is: %s\n",str);
   printf("Given substring is: %s\n",substr);

   int i=0,j,k,count;
   for(j=0; j<strl; j++)
   {  
       if(substr[i]==str[j])
       {  
            count=0;
            for(k=i; k<substrl; k++)
           {  
               if(substr[k]==str[j+count])
               {
                  count++;
               }
               else
               {
                  break;
               }
            }
            if(count==substrl)
           {
               return 1;
            }
        }
    } 
       return 0;
}

int main()
{
    char string[100], substr[100];
    printf("Input the string: ");
    gets(string);
    printf("Input the substring to be search: ");
    gets(substr);

    if(check_string_present(string,substr,strlen(string),strlen(substr))==1)
    {
        printf("The Substring is exists in the string.\n");
    }
    else
    {
        printf("The substring is not exists in the string.\n");
    }
    return 0;
}
/*
Sample Output:

Input the string: JavaScript
Input the substring to be search: script
Given string is: JavaScript
Given substring is: script
The substring is not exists in the string.
*/