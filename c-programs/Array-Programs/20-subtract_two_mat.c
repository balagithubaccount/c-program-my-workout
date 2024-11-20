//20.Write a C program to addition of two matrices.

#include<stdio.h>
void main()
{
  int i,j,size;
  printf("Enter the size of the matrices: ");
  scanf("%d",&size);
  int mat1[size][size],mat2[size][size],subarr[size][size];

  printf("Enter the elements for matrix 1:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
       printf("element mat1[%d][%d]: ",i,j);
       scanf("%d",&mat1[i][j]);
    }
  }
   printf("Enter the elements for matrix 2:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
       printf("element mat2[%d][%d]: ",i,j);
       scanf("%d",&mat2[i][j]);
    }
  }
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      subarr[i][j]=mat1[i][j]-mat2[i][j];
    }
  }
  printf("Matrix 1 is:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",mat1[i][j]);
    }
    printf("\n");
  }
  printf("Matrix 2 is:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",mat2[i][j]);
    }
    printf("\n");
  }
  printf("Subtraction of two matrices is: \n");
  
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",subarr[i][j]);
    }
    printf("\n");
  }
}

Output:

Enter the size of the matrices: 2
Enter the elements for matrix 1:
element mat1[0][0]: 4
element mat1[0][1]: 5
element mat1[1][0]: 3
element mat1[1][1]: 2
Enter the elements for matrix 2:
element mat2[0][0]: 1
element mat2[0][1]: 2
element mat2[1][0]: 3
element mat2[1][1]: 4
Matrix 1 is:
4	5	
3	2	
Matrix 2 is:
1	2	
3	4	
Subtraction of two matrices is: 
3	3	
0	-2	



