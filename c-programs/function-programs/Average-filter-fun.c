// Write a C program to find Average Filter for given square matrix.

#include <stdio.h>
int arr[10][10];
float newarr[10][10];
int row, col;

void input_arr()
{
    printf("Enter the %d values: \n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d,%d element is: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void giv_mat()
{
    printf("\nGiven matrix is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void average_filter()
{
    int sum, x;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            sum = 0;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {

                    if (k < 0 || k > row - 1 || l < 0 || l > col - 1)
                    {
                        x = 0;
                    }

                    else
                    {
                        x = arr[k][l];
                    }
                    sum = sum + x;
                }
            }
            newarr[i][j] = (float)sum / 9;
        }
    }
}

void filtered_mat()
{
    printf("\nAverage filtered Matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%.2f\t", newarr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    printf("Input the row size of the matrix: ");
    scanf("%d", &row);
    printf("Input the column size of the matrix: ");
    scanf("%d", &col);

    input_arr();
    giv_mat();
    average_filter();
    filtered_mat();

    return 0;
}

/*
Sample Output:

Input the row size of the matrix: 3
Input the column size of the matrix: 3
Enter the 9 values: 
0,0 element is: 1
0,1 element is: 2
0,2 element is: 3
1,0 element is: 4
1,1 element is: 5
1,2 element is: 6
2,0 element is: 7
2,1 element is: 8
2,2 element is: 9

Given matrix is
1       2       3
4       5       6
7       8       9


Average filtered Matrix is:
1.33    2.33    1.78
3.00    5.00    3.67
2.67    4.33    3.11


*/