  // Write a C program to return only the unique rows from a given binary matrix.

   #include <stdio.h>
   void main()
   {
     int row, col, i, j, k, l, temp, count=0,run;
     printf("Enter the row size: "); 
     scanf("%d",&row);
     printf("Enter the column size: ");
     scanf("%d",&col);
     int matarr[row][col], check[row][col];
     printf("Enter the %d binary elements: \n",row*col);
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
          scanf("%d",&matarr[i][j]);
          if( i==0)
          {
            check[i][j]=matarr[i][j]; 
            count=1;	
          }
       }
     }
     printf("The given matrix is: \n");
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
          printf("%d\t",matarr[i][j]);
       }printf("\n");
     }
     for(i=1; i<row; i++)
     {
       run=count;
       for(j=0; j<run; j++)
       {
         temp=0;
         for(k=0; k<col; k++)
         {
            if(matarr[i][k]==check[j][k])
            { temp++; }
         }
       
         if(temp!=col)
         {
           for(k=count,l=0; l<col; l++)
           {
             check[k][l]=matarr[i][l];
           }
           count++;
           break;
         }
         else
         {
           break;
         }
       }
     }
     printf("\nThe Unique rows of the given array are: \n");
     for(i=0; i<count; i++)
     {
       for(j=0; j<col; j++)
       {
         printf("%d\t",check[i][j]);
       }
       printf("\n");
     }
   }

   /*

   Sample Output:

   Enter the row size: 4
   Enter the column size: 5
   Enter the 20 binary elements: 
   0 1 0 0 1
   1 0 1 1 0
   0 1 0 0 1
   1 0 1 0 0
   The given matrix is: 
   0	   1	   0	   0	   1	
   1	   0	   1	   1	   0	 
   0	   1	   0	   0	   1	
   1	   0	   1	   0	   0	

   The Unique rows of the given array are: 
   0	   1	   0	   0	   1	
   1	   0	   1	   1	   0	
   1	   0	   1	   0	   0	
*/
