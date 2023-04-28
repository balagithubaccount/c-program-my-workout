//22. Write a C program to Transpose of a given matrix.

#include<stdio.h>
void main()
{
   int i,j,row,col;
   printf("Enter the row and column size:\n");
   scanf("%d%d",&row,&col);
   int mat[row][col];
   printf("Enter the %d elements for matrix:\n",row*col);
   for(i=0; i<row; i++)
   {
      for(j=0; j<col; j++)
      {
         scanf("%d",&mat[i][j]);
      }
   }
   printf("Given matrix is:\n");
   for(i=0; i<row; i++)
   {
     for(j=0; j<col; j++)
     {
        printf("%d\t",mat[i][j]);
     }
     printf("\n");
   }
   printf("Transpose of a given matrix is:\n");
   for(i=0; i<col; i++)
   {
     for(j=0; j<row; j++)
     {
        printf("%d\t",mat[j][i]);
     }
     printf("\n");
   }
}
/*
output:

Enter the row and column size:
2 5
Enter the 10 elements for matrix:
1
2
3
4
5
6
7
8
9
0
Given matrix is:
1	2	3	4	5	
6	7	8	9	0	
Transpose of a given matrix is:
1	6	
2	7	
3	8	
4	9	
5	0	

*/
