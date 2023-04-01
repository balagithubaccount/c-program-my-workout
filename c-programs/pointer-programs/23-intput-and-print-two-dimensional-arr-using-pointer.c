// Write a C program to input and print elements of a two dimensional array using pointers.

#include <stdio.h>
int row, col;
void input_matrix(int mat[][col])
{
    printf("Input the %d elements:\n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", (*(mat + i) + j));
        }
    }
}
void print_matrix(int (*mat)[col])
{
    printf("Given Matrix is: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
int main()
{

    printf("Input the row size of the matrix: ");
    scanf("%d", &row);

    printf("Input the column size of the matrix: ");
    scanf("%d", &col);

    int mat[row][col];

    input_matrix(mat);
    print_matrix(mat);
    return 0;
}

/*
Sample Output:

Input the row size of the matrix: 3
Input the column size of the matrix: 3
Input the 9 elements:
2
4
6
8
1
3
5
7
9
Given Matrix is: 
2       4       6
8       1       3
5       7       9

*/