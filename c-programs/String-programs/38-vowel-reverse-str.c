// Write a C programming to reverse all the vowels present in a given string. 

#include <stdio.h>
#include <string.h>
void vowel_reverse(char str[], int cons)
{
   int i, j;
   char temp;
   for (i = 0; str[i] != '\0'; i++)
   {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
      {
         for (int j = cons; j != i && j > i; j--)
         {
            if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
            {
               temp = str[j];
               str[j] = str[i];
               str[i] = temp;
               cons--;
               break;
            }
            cons--;
         }
      }
   }
   printf("After the process a string is: %s\n", str);
}
int main()
{
   char string[100];
   printf("Input a string: ");
   scanf(" %[^\n]", string);
   vowel_reverse(string, strlen(string) - 1);

   return 0;
}

/*
Sample Output:1

Input a string: aEiOu
After the process a string is: uOiEa

Sample Output:2

Input a string: Programming
After the process a string is: Prigrammong


*/