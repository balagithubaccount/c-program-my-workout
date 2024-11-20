//24. Write a C program To find sum of left diagonals of a matrix.

#include<stdio.h>
void main()
{
  int size, i, j, con, sum=0;
  printf("Enter the square matrix size: ");
  scanf("%d",&size);
  int matrix[size][size];
  con=size-1;
  printf("Enter the elements:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("Element [%d],[%d]: ",i,j);
      scanf("%d",&matrix[i][j]);
    }
  }
  printf("Given matrix is:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<size; i++)
  {
    for(j=0; j<size;j++)
    {
      if((i+j)==con)
        sum=sum+matrix[i][j];
    }
  }
  printf("Sum of the left diagonal element is: %d.\n",sum);
}

/*
Output:

Enter the square matrix size: 4
Enter the elements:
Element [0],[0]: 1
Element [0],[1]: 2
Element [0],[2]: 3
Element [0],[3]: 4
Element [1],[0]: 2
Element [1],[1]: 1
Element [1],[2]: 3
Element [1],[3]: 4
Element [2],[0]: 3
Element [2],[1]: 2
Element [2],[2]: 1
Element [2],[3]: 4
Element [3],[0]: 1
Element [3],[1]: 2
Element [3],[2]: 3
Element [3],[3]: 1
Given matrix is:
1	2	3	4	
2	1	3	4	
3	2	1	4	
1	2	3	1	
Sum of the left diagonal element is: 10.

*/
