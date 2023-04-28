//31. To check whether a given matrix is an identity matrix or not.
  
#include<stdio.h>
void main()
{
  int row, col, i, j, con1=0, con2=0;
  printf("Enter the row and column of the square matrix: ");
  scanf("%d%d",&row,&col);
  int mat[row][col];
  printf("Enter the Elements of the matrix.\n");
  for(i=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    {
      printf("Element-[%d][%d]: ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  printf("The Given matrix is:\n");
  for(i=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    {
      printf("%d\t",mat[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    {
      if(i==j && mat[i][j]==1)
        con1++;
      else if(mat[i][j]==0)
        con2++;
      else
        break;
    }
  }
  if(con1==row && con2==(row*col)-col)
    printf("The matrix is an identity matrix.\n");  
  else
    printf("The matrix is not an identity matrix.\n");
}

/*
Output:

Enter the row and column of the square matrix: 4 4
Enter the Elements of the matrix.
Element-[0][0]: 1
Element-[0][1]: 0
Element-[0][2]: 0
Element-[0][3]: 0
Element-[1][0]: 0
Element-[1][1]: 1
Element-[1][2]: 0
Element-[1][3]: 0
Element-[2][0]: 0
Element-[2][1]: 0
Element-[2][2]: 1
Element-[2][3]: 0
Element-[3][0]: 0
Element-[3][1]: 0
Element-[3][2]: 0
Element-[3][3]: 1
The Given matrix is:
1	0	0	0	
0	1	0	0	
0	0	1	0	
0	0	0	1	
The matrix is an identity matrix.

*/
