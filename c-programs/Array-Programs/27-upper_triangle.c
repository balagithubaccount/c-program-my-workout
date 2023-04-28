//27. Write a C program To print or display upper triangular matrix.

#include<stdio.h>
void main()
{
   int size, i, j, zero=0;
   printf("Enter the matrix size: ");
   scanf("%d",&size);
   int matrix[size][size],uppermat[size][size];
   printf("Enter the elements: \n");
   for(i=0; i<size; i++)
   {
     for(j=0; j<size; j++)
     {
       scanf("%d",&matrix[i][j]);
       uppermat[i][j]=matrix[i][j];
     }
   }
   for(i=0; i<size; i++)
   {
     for(j=0; j<size; j++)
     {
        if(j>0 && i<j)
          uppermat[i][j]=zero;
     }
   }
   printf("Upper triangle is: \n");
   for(i=0; i<size; i++)
   {
     for(j=0; j<size; j++)
     {
        printf("%d\t",uppermat[i][j]);
     }
     printf("\n");
   }
}

/*
Output:


Enter the matrix size: 5
Enter the elements: 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
Upper triangle is: 
1	0	0	0	0	
1	2	0	0	0	
1	2	3	0	0	
1	2	3	4	0	
1	2	3	4	5	

*/
