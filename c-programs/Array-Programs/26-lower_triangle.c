//26. Write a C program to print or display the lower triangular of a given matrix.

#include<stdio.h>
void main()
{
  int size, i, j, zero=0;
  printf("Enter the size of the square matrix: ");
  scanf("%d",&size);
  int matrix[size][size], lowmat[size][size];
  printf("Enter the elements: \n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      scanf("%d",&matrix[i][j]);
    }
  }

  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      if(i>0 && j<i)
         lowmat[i][j]=zero;
      else
        lowmat[i][j]=matrix[i][j];
    }
  }
  printf("Lower triangle is: \n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",lowmat[i][j]);
    }
    printf("\n");
  }
}

Output:

Enter the size of the square matrix: 5
Enter the elements: 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
Lower triangle is: 
1	2	3	4	5	
0	2	3	4	5	
0	0	3	4	5	
0	0	0	4	5	
0	0	0	0	5
