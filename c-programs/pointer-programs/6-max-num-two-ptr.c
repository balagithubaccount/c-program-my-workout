// Write a program in C to find the maximum number between two numbers using a pointer. 

#include <stdio.h>

int main() 
{
    int fno, sno;
    int *ptr, *qtr;

    ptr = &fno, qtr = &sno;
    printf("Enter the value for fno: ");
    scanf("%d",ptr);

    printf("Enter the value for sno: ");
    scanf("%d",qtr);

    (*ptr > *qtr) ?  printf("\n%d is the maximum number.\n",*ptr) : printf("\n%d is the maximum number.\n",*qtr);

    return 0;
}

/*
Sample Output:

Enter the value for fno: 5
Enter the value for sno: 6

6 is the maximum number.


Sample Output:

Enter the value for fno: 6
Enter the value for sno: 5

6 is the maximum number.
*/