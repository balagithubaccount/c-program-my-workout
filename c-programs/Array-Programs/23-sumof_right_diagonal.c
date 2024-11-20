//To find sum of right diagonals of a matrix.

#include<stdio.h>
void main()
{
  int size, i, j, sum=0;
  printf("Enter the size of the square matrix: ");
  scanf("%d",&size); 
  int matrix[size][size];
  printf("Enter the lements\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("Element [%d][%d]: ",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }
  printf("Given matrix is:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",matrix[i][j]);
    }printf("\n");
  }
  for(i=0; i<size; i++)
  {
     for(j=0; j<size;  j++)
     {
        if(i==j)
         sum=sum+matrix[i][j];
     }
  }
  printf("Sum of the right diagonal elements is %d.\n",sum);
}

/*
 Output:


Enter the size of the square matrix: 3
Enter the lements
Element [0][0]: 3
Element [0][1]: 1
Element [0][2]: 2
Element [1][0]: 2
Element [1][1]: 3
Element [1][2]: 4
Element [2][0]: 5
Element [2][1]: 6
Element [2][2]: 7
Given matrix is:
3	1	2	
2	3	4	
5	6	7	
Sum of the right diagonal elements is 13.

*/
