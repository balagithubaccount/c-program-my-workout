// Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>
void main()
{
    char string[100], small_char, temp, i, j;
    printf("Input the String: ");         // cout << "Input the String: ";
    fgets(string, sizeof(string), stdin); // getline(cin, str);
    printf("Given String: %s", string);   // cout << "Given String: " << str << endl;
    int len = strlen(string);
    small_char = string[0];
    for (i = '\0'; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (string[i] > string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("After sorting the string appears: %s\n", string);
    // cout << "After sorting the string appears: " << str << endl;
}

/*
Sample Output:

Input the String: mail@123gmail.com
Given String: mail@123gmail.com
After sorting the string appears:
.123@aacgiillmmmo
*/