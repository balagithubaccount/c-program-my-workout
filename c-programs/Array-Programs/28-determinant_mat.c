//28.Write a C program To calculate determinant of a 3x3 matrix.

#include<stdio.h>
void main()
{
   int mat[3][3],i,j,k,l,part1,part2,sum=0,d,s,det[4],sol[3]; 
   printf("Enter the elements for matrix: \n");
   for(i=0; i<3; i++)
   {
     for(j=0; j<3; j++)
     {
       printf("Element matrix[%d][%d]: ",i,j);
       scanf("%d",&mat[i][j]);
     }
   }
   //printf("The given matrix is:\n");
   for(i=0; i<3; i++)
  {
     for(j=0; j<3; j++)
     {
        printf("%d\t",mat[i][j]);
     }
     printf("\n");
  }
   for(i=0; i<1; i++)
   {
     s=0;
     for(j=0; j<3; j++)
     {
     d=0;
       for(k=0; k<3; k++)
       {
          for(l=0; l<3; l++)
          {
             if(k!=i && l!=j)
               {
                  det[d]=mat[k][l];
                  d++;
               }
          }
       }
       part1=det[0]*det[3];
       part2=(det[1]*det[2])*(-1);
       sol[s]=(part1+part2)*mat[i][j];if(s==1) sol[s]=sol[s]*-1;
       s++;
     }
   }
   for(i=0; i<s; i++)
   {
     sum=sum+sol[i];
   }
   printf("\nThe Determinant of the matrix is: %d.\n",sum);
  
}

/*
Output:

Enter the elements for matrix: 
Element matrix[0][0]: 0
Element matrix[0][1]: 2
Element matrix[0][2]: -1
Element matrix[1][0]: 3
Element matrix[1][1]: -2
Element matrix[1][2]: 1
Element matrix[2][0]: 3
Element matrix[2][1]: 2
Element matrix[2][2]: 1
0	2	-1	
3	-2	1	
3	2	1	

The Determinant of the matrix is: -12.

*/
