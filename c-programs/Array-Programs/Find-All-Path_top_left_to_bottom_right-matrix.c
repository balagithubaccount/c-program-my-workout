   //Write a C program to count all possible paths from top left to bottom right of a mxn matrix...
 
   #include <stdio.h>
   void main()
   {
     int row, col, i, j;
     printf("Enter the row size of the matrix: ");
     scanf("%d",&row);
     printf("Enter the column size of the matrix: ");
     scanf("%d",&col);
     int matarr[row][col];
     for(i=0; i<row; i++)
     {
       matarr[i][0]=1;
     }
     for(i=0; i<col; i++)
     {
       matarr[0][i]=1;
     }
     for(i=1; i<row; i++)
     {
       for(j=1; j<col; j++)
       {
         matarr[i][j]=matarr[i-1][j]+matarr[i][j-1];
       }
     }
 
     printf("\nThe size of the matrix is: %d x %d\n",row,col);
     printf("The all possible paths from top left to bottom right is: %d\n",matarr[row-1][col-1]);
   }

   
   Sample Output: 

   Enter the row size of the matrix: 3
   Enter the column size of the matrix: 4

   The size of the matrix is: 3 x 4
   The all possible paths from top left to bottom right is: 10
   
