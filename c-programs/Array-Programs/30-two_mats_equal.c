//30. Write a C program To accept two matrices and check whether they are equal.

#include<stdio.h>
void main()
{
  int row1, col1, row2, col2, i, j, result;
  printf("Enter the row and column of the matrix 1: ");
  scanf("%d%d",&row1, &col1);
  printf("Enter the row and column of the matrix 2: ");
  scanf("%d%d",&row2, &col2);
  int mat1[row1][col1], mat2[row2][col2];
  printf("Enter the %d elements of the matrix 1:\n",row1*col1);
  for(i=0; i<row1; i++)
  {
    for(j=0; j<col1; j++)
    {
      printf("Element-[%d][%d]: ",i,j);
      scanf("%d",&mat1[i][j]);
    }
  } 
  printf("Enter the %d elements of the matrix 2:\n",row2*col2);
  for(i=0; i<row2; i++)
  {
    for(j=0; j<col2; j++)
    {
      printf("Element-[%d][%d]: ",i,j);
      scanf("%d",&mat2[i][j]);
    }
  }
  printf("Given matrix 1:\n");
  for(i=0; i<row1; i++)
  {
    for(j=0; j<col1; j++)
    {
       printf("%d\t",mat1[i][j]);
    }
    printf("\n");
  }
  printf("Given matrix 2:\n");
  for(i=0; i<row2; i++)
  {
    for(j=0; j<col2; j++)
    {
       printf("%d\t",mat2[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<row1; i++)
  {
    for(j=0; j<col1; j++)
    {
      if(mat1[i][j]==mat2[i][j])
         result=1;
      else
      {
        result=0;
        break;
      } 
    }
  }
  if((row1==row2) && (col1==col2))
    printf("The Matrices can be compared:\n");
  else
    printf("The Matrices can not be compared:\n");
  if(result==1)
   printf("Two matrices are equal.\n");
  else
   printf("Two matrices are not equal.\n");
}

/*
Output:

Enter the row and column of the matrix 1: 2 2
Enter the row and column of the matrix 2: 2 2
Enter the 4 elements of the matrix 1:
Element-[0][0]: 1
Element-[0][1]: 2
Element-[1][0]: 3
Element-[1][1]: 4
Enter the 4 elements of the matrix 2:
Element-[0][0]: 1
Element-[0][1]: 2
Element-[1][0]: 3
Element-[1][1]: 4
Given matrix 1:
1	2	
3	4	
Given matrix 2:
1	2	
3	4	
The Matrices can be compared:
Two matrices are equal.

*/
