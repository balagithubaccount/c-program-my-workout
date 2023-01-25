
// Write a C program to check whether two given strings are an anagram.

#include <stdio.h>
#include <string.h>

char str1[10], str2[10];

int Anagram(char str1[], char str2[]);
void main()
{
   int temp;
   printf("Enter the first string: ");
   // fgets(str1, sizeof(str1), stdin);
   gets(str1);
   printf("Enter the second string: ");
   // fgets(str2, sizeof(str2), stdin);
   gets(str2);
   temp = Anagram(str1, str2);
   if (temp == 1)
   {
      printf("\n%s and %s are Anagram.\n", str1, str2);
   }
   else
   {
      printf("\n%s and %s are not Anagram.\n", str1, str2);
   }
}

int Anagram(char str1[], char str2[])
{
   int i, j;
   int len1 = strlen(str1), len2 = strlen(str2);
   int checked_index[100], k = 0, count = 0;
   if (len1 != len2)
   {
      return 0;
   }
   for (i = 0; i < len1; i++)
   {
      for (j = 0; j < len1; j++)
      {
         for (int l = 0; l < k && i != 0; l++)
         {
            if (checked_index[l] == j)
            {
               j++;
            }
         }
         if (str1[i] == str2[j])
         {
            checked_index[k] = j;
            k++;
            count++;
            break;
         }
      }
   }
   if (count == len1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
/*
   Sample Output:1

   Enter the first string: spare
   Enter the second string: pears

   spare and pears are Anagram.

   Sample Output:2

   Enter the first string: tall
   Enter the second string: all

   tall and all are not Anagram.
*/
