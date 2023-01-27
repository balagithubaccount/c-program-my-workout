// Write a C program to find median filter for the given square matrix.

// Median Filter

#include <stdio.h>
int main_mat[10][10];
int result_mat[10][10];
int sort[10];
int row, col;
int sorting_arr();

void get_elements()
{
    printf("Input the %d Elements for %d x %d matrix:\n", row * col, row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d,%d Element : ", i, j);
            scanf("%d", &main_mat[i][j]);
        }
    }
}
void print_elements()
{
    printf("Givern matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", main_mat[i][j]);
        }
        printf("\n");
    }
}
int meadian_Process()
{
    int pos;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pos = 0;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {
                    if (k < 0 || k > row - 1 || l < 0 || l > col - 1)
                    {
                        sort[pos] = 0;
                        pos++;
                    }
                    else
                    {
                        sort[pos] = main_mat[k][l];
                        pos++;
                    }
                }
            }
            result_mat[i][j] = sorting_arr();
        }
    }
}
int sorting_arr()
{
    int temp, i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (sort[i] > sort[j])
            {
                temp = sort[j];
                sort[j] = sort[i];
                sort[i] = temp;
            }
        }
    }
    return sort[4]; // 4'th index is a middle element for sorted array.
}

void meadian_matrix()
{
    printf("\n\nMeadian filtered matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", result_mat[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Input the row size: ");
    scanf("%d", &row);
    printf("Input the column size: ");
    scanf("%d", &col);

    get_elements();
    print_elements();
    meadian_Process();
    meadian_matrix();

    return 0;
}

/*
Sample Output:

Input the row size: 3
Input the column size: 3
Input the 9 Elements for 3 x 3 Matrix:
0,0 Element:1
0,1 Element:2
0,2 Element:3
1,0 Element:4
1,1 Element:5
1,2 Element:6
2,0 Element:7
2,1 Element:8
2,2 Element:9
Given Matrix is:
1       2       3
4       5       6
7       8       9


Meadian filtered Matrix is: 
0       2       0
2       5       3
0       5       0

*/
