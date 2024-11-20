// Write a program to find Cumulative sum of numbers in array using function.

#include <stdio.h>
void output(int i);
int result_arr[50];
void cumulative(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        result_arr[i] = sum;
    }
    output(i);
}
void output(int n)
{
    printf("Cumulative array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", result_arr[i]);
    }
    printf("\n");
}
void main()
{
    int size;

    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &i[arr]); //  arr[i]  is equal to i[arr]
    }
    cumulative(arr, size);
}

/*
Sample Output:

Enter the array size: 12
Enter the elements: 1 3 5 7 9 8 6 4 2 11 10 12
Cumulative array is:
1  4  9  16  25  33  39  43  45  56  66  78

Sample Output:

Enter the array size: 6
Enter the elements: 1  2  3  4  5  6
Cumulative array is: 
1  3  6  10  15  21 

*/