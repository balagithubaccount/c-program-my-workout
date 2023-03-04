//Write a C programming to count of each character in a given string.

#include <stdio.h>
#include <string.h>
int n = 100;
void count_each_char(char str[], int n)
{
   int i, j, count, temp, k=0;
   char store[n];
   for(i=0; i<n; i++)
   {
      temp = 1, count = 0;
      for(j=0; j<i; j++)
      {
        if(str[i] == store[j])
        {
            temp=0;
        }
      }
      if(temp == 1 && str[i]!= ' ')
      {
        for(j=0; j<n; j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        printf("%c\t%d\n",str[i],count);
        store[k++]= str[i];
      }
   }
}
int main()
{
    char string[n];
    printf("Input a string: ");
    scanf(" %[^\n]",string);
    printf("\nThe count of each character in the string \"%s\" is\n\n",string);
    count_each_char(string, strlen(string));

    return 0;
}

/*
Sample Output:

Input a string: This is test string

The count of each character in the string "This is test string" is

T  -  1
h  -  1
i  -  3
s  -  4
t  -  3
e  -  1
r  -  1
n  -  1
g  -  1

*/