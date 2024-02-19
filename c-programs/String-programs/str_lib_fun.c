/*

character -- 'a','d','3'
string -- "guru","game", "7437378"

In order to use the strings in our program we need a header file called string.h.


string declaration or character array declaration:
syntax:

char char_array_name[array_size];

Initialisation:

1. char ch_arr[10]={"gradient"};

2. char ch_arr[10]={'g','r','a','d','i','e','n','t','\0'};

3. printf("enter the name: ");
   scanf("%s",&ch_arr);

4. char ch_arr[]={"gradient"};



*/

/*
#include<stdio.h>
#include<string.h>
void main()
{
char name[20];
int n;

printf(" Enter the name: \n");
scanf("%s",&name);

printf("the name is %s \n", name);

}


    strlen(s1)     - string length      // length of the string
    strcpy(s2,s1)  - string copy    	 //
    strcmp(s1,s2)  - string compare			//
    strcat(s1,s2)  - string concatenation		//
    strupr(s1)     - string uppercase     //
    strlwr(s1)     - string lowercas
    strrev(s1)     - string reverse
*/

// string length
/*
#include <stdio.h>
#include <string.h>
void main()
{
    char student[20];
    int n;

    printf(" Enter the name: \n");
    scanf("%s", student);
    n = strlen(student);

    printf("the number of letters in %s is %d \n", student, n);
}
/*
// string copy
#include <stdio.h>
#include <string.h>
void main()
{
    char student[20], dummy[20];
    int n;

    printf(" Enter the name: \n");
    scanf("%s", student);
    strcpy(dummy, student);

    printf("the name in student: %s \n the name in dummy:  %s \n", student, dummy);
}

/*
// string compare
#include <stdio.h>
#include <string.h>
void main()
{
    char student1[20], student2[20];
    int n;

    printf(" Enter the name 1: \n");
    scanf("%s", student1);
    printf(" Enter the name 2: \n");
    scanf("%s", student2);
    n = strcmp(student1, student2);
    if (n == 0)
        printf("the name 1 %s and the name name 2 %s is same\n", student1, student2);
    else
        printf("the name 1 %s and the name name 2 %s is not same\n", student1, student2);
}

// string concatenation
#include <stdio.h>
#include <string.h>
void main()
{
    char student1[20], student2[20];
    int n;

    printf(" Enter the name 1: \n");
    scanf("%s", student1);
    printf(" Enter the name 2: \n");
    scanf("%s", student2);
    strcat(student1, student2);
    printf("the concatenated string is %s \n", student1);
    printf(" string 2 is %s \n", student2);
}



*/

// string uppercase
// string lowercase
// string reverse

#include <stdio.h>
#include <string.h>
    void main()
{
    char student1[20];

    printf(" Enter the name 1: \n");
    scanf("%s", student1);

    printf("the uppercase of name is %s \n", strupr(student1));

    printf("the lowercase of name is %s \n", strlwr(student1));

    printf("the reversed version of name is %s \n", strrev(student1));
}
