   //Write a C program to find the sum of upper triangular elements of a matrix...

   #include <stdio.h>
   void main()
   {
     int row, col, i, j, sum=0;
     printf("Enter the row & column size of the square matrix: ");
     scanf("%d",&row);
     col=row;
     int mat[row][col];
     printf("Enter the %d Elements for matrix:\n",row*col);
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         scanf("%d",&mat[i][j]);
       }
     }
     printf("The Given Matrix is: \n");
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         printf("%d\t",mat[i][j]);
       }printf("\n");
     }
     printf("The Elements being summed of the upper triangular matrix are: ");
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         if(i!=j && i<j)
         {
           sum=sum+mat[i][j];
           printf("%d ",mat[i][j]);
         }
       }
     }
     printf("\nThe sum of the upper triangular Matrix Elements are: %d\n",sum); 
   }

   /*
   Output:

   Enter the row & column size of the square matrix: 3
   Enter the 9 Elements for matrix:
   1 2 3
   4 5 6
   7 8 9
   The Given Matrix is:  
   1	   2	  3	
   4	   5	  6	
   7	   8	  9	
   The Elements being summed of the upper triangular matrix are: 2 3 6 
   The sum of the upper triangular Matrix Elements are: 11
 
   */
