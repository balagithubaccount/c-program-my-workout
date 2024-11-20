   //60. Write a C program to find the row with maximum number of 1's in 2D array;

   #include <stdio.h>
   void main()
   {
      int row,col,count1s=0,count,i,j,index ;
      printf("Enter the row size of the matrix: ");
      scanf("%d",&row);
      printf("Enter the column size of the matrix: ");
      scanf("%d",&col);
      int mat[row][col];
      printf("Enter the %d elements: \n",row*col);
      for(i=0; i<row; i++)
      {
        count=0;
        for(j=0; j<col; j++)
        {
           scanf("%d",&mat[i][j]);
           if(mat[i][j]==1)
           { 
             count++;
           }
        }
        if(count1s<count)
        {
           count1s=count;
           index=i;
        }
      }printf("The given matrix is: \n");
      for(i=0; i<row; i++)
      {
         for(j=0; j<col; j++)
         {
            printf("%d  ",mat[i][j]);
         }printf("\n");
      }
      printf("The index of row with maximum 1's is: %d\n",index);
   }

   Output:
  
   Enter the row size of the matrix: 5
   Enter the column size of the matrix: 5
   Enter the 25 elements: 
   0 1 0 1 1
   1 1 1 1 1
   1 0 0 1 0
   0 0 0 0 0 
   1 0 0 0 1
   The given matrix is: 
   0  1  0  1  1  
   1  1  1  1  1  
   1  0  0  1  0  
   0  0  0  0  0  
   1  0  0  0  1  
   The index of row with maximum 1's is: 1



