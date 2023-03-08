//Write a C programming to multiple two given positive numbers represent as string. 

#include <stdio.h>

int prod_num_str(char* ptr1, char* ptr2)
{
    printf("\nOriginal Numbers: %s and %s\n",ptr1,ptr2);
    int a=0, b=0, place = 10;
    while(*ptr1 != '\0')
    {
        a = (a * place) + (*ptr1 - 48);
        ptr1++;
    }
    while(*ptr2 != '\0')
    {
        b = (b*place) + (*ptr2 - 48);
        ptr2++;
    }
    return (a*b);
}
int main()
{
    char str1[10], str2[10];
    int sol;
    printf("Input a String only digits: ");
    scanf("%s",str1);
    printf("Input a String only digits: ");
    scanf("%s",str2);

    sol = prod_num_str(str1,str2);
    printf("Multiple two said numbers represent a string? %d\n",sol);

    return 0;
}

/*
Sample Output:

Input a String only digits: 100
Input a String only digits: 15

Original Numbers: 100 and 15
Multiple two said numbers represent a string? 1500

*/