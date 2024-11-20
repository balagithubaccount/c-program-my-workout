//Write a C program to copy one string to another string.

#include <stdio.h>
void strcopy(char* ptr2, char* ptr1)
{
    for(int i=0; *ptr1!='\0'; ptr1++)
    {
        *ptr2=*ptr1;
        ptr2++;
    }
}
int main()
{
    char str1[100],str2[100];
    printf("Input the string: ");
    fgets(str1,sizeof(str1),stdin);
    strcopy(str2,str1);
    printf("The First String is: %s",str1);
    printf("The Second String is: %s",str2);

    return 0;
}

/*
Sample Output:

Input the string: This is a string to be copied.
The First String is: This is a string to be copied.
The Second String is: This is a string to be copied.

*/