//29.Write a C program Determine whether it is a sparse matrix or not.

#include<stdio.h>
void main()
{
  int row, col, i, j,zero=0, con;
  printf("Enter the number of row of the matrix: ");
  scanf("%d",&row);
  printf("Enter the number of column of the matrix: ");
  scanf("%d",&col);
  con=row*col;
  int matrix[row][col];
  printf("Enter %d Elements of the matrix:\n",con);
  for(i=0; i<row;i++)
  {
    for(j=0; j<col; j++)
    {
      printf("Element-[%d][%d]: ",i,j);
      scanf("%d",&matrix[i][j]);
      if(matrix[i][j]==0)
        zero++;
    }
  }
  printf("Given matrix is:\n");
  for(i=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    {
      printf("%d\t",matrix[i][j]);
    }printf("\n");
  }
  if(zero>con/2)
    printf("The given matrix is sparse matrix.\n");
  else
    printf("The given matrix is not a sparse matrix.\n");
  printf("There are %d number of zeros in the matrix.\n",zero);
  
}

/*

Output:


Enter the number of row of the matrix: 3
Enter the number of column of the matrix: 3
Enter 9 Elements of the matrix:
Element-[0][0]: 1
Element-[0][1]: 0
Element-[0][2]: 2
Element-[1][0]: 0
Element-[1][1]: 6
Element-[1][2]: 0
Element-[2][0]: 0
Element-[2][1]: 0
Element-[2][2]: 0
Given matrix is:
1	0	2	
0	6	0	
0	0	0	
The given matrix is sparse matrix.
There are 6 number of zeros in the matrix.

*/
