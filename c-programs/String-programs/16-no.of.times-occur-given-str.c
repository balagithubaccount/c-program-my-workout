// Write a program in C to find the number of times a given word 'the' appears in the given string.

#include <stdio.h>
#include <string.h>
int count_occur_given_string(char str[], char word[])
{
    int i, j, count, word_occur, temp, lenstr, lenword;
    i = j = word_occur = 0;
    lenstr = strlen(str);
    lenword = strlen(word);
start:
    temp = 0;
    if (i < lenword && j < lenstr)
    {
        temp = 1;
    }
    else
    {
        goto end;
    }
    count = 0;
    if ((word[i] == str[j] || word[i] + ' ' == str[j] || word[i] - ' ' == str[j]) && (temp == 1))
    {
        count++;
        // printf("word[%d] = %c, %d - str[%d] = %c, %d,,count=%d\n",i,word[i],word[i],j,str[j],str[j],count);
        while ((word[i + count] == str[j + count] || word[i + count] + ' ' == str[j + count] || word[i + count] - ' ' == str[j + count]) && (i + count < lenword))
        { //  printf("word[%d] = %c, str[%d] = %c\n",i+count,word[i+count],j+count,str[j+count]);

            count++;
        }
        // printf("count = %d\n",count);
        if (count == lenword)
        {
            word_occur++;
            j++;
            goto start;
        }
        else
        {
            j++;
            goto start;
        }
    }
    else
    {
        j++;
        goto start;
    }
end:
    return word_occur;
}
int main()
{
    char string[100], word[50];
    int count;
    printf("Input the string: ");
    scanf(" %[^\n]", string);
    printf("Input the word: ");
    scanf(" %[^\n]", word);
    printf("\nThe given String is: %s\n", string);
    printf("The given word is: %s\n", word);
    count = count_occur_given_string(string, word);
    if (count > 0)
    {
        printf("The Frequency of the word '%s' is: %d.\n", word, count);
    }
    else
    {
        printf("The Frequency of the word '%s' does not occur in the given string.\n", word);
    }

    return 0;
}
/*
Sample Output:

Input the string: The string where the word the present more than once.
Input the word: the

The given String is: The string where the word the present more than once.
The given word is: the
The Frequency of the word 'the' is: 3.

*/