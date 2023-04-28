   //89. Write a C program to find maximum size square sub-matrix with all 1's...
  
   #include<stdio.h>
   void main()
   {
     int row, col, subrow, subcol, indexrow, indexcol, temprow, tempcol, count, i, j, k=0, l=0;
     printf("Enter the row size: ");
     scanf("%d",&row);
     printf("Enter the column size: ");
     scanf("%d",&col);
     int mat[row][col],submat[row][col];
     indexrow=indexcol=0;
     printf("Enter the %d elements for %dx%d matrix: \n",row*col, row, col);
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         scanf("%d",&mat[i][j]);
       }
     }
     printf("\nThe given array in matrix form is: \n");
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         printf("%d\t",mat[i][j]);
       }
       printf("\n");
     }
     subrow=(row>col)?col:row;
     temprow=tempcol=subrow;
     subrow--;
     subcol=subrow;
     
     start:
     count=0;
     for(i=indexrow; i<=subrow; i++)
     {
       for(j=indexcol; j<=subcol; j++)
       {
         if(mat[i][j]==1)
         {
           count++;
         }
       }
     }
     // printf("\ncount=%d\n",count);
    
     if(count==(temprow)*(tempcol))
     {
       goto copy;
     }
     
     if((subrow+1)<row)
     {
       subrow++;
       indexrow++;
       goto start;
     }
     else
     {
       subrow=subrow-indexrow;
       indexrow=0;
       if((subcol+1)<col)
       {
         subcol++;
         indexcol++;
         goto start;
       }
       else
       {
         subcol=subcol-indexcol;
         indexcol=0;
         subrow--;
         subcol--;
         temprow--;
         tempcol--;
         goto start;
       }
     }
     copy:
     for(i=indexrow; i<=subrow; i++,k++)
     {
       l=0;
       for(j=indexcol; j<=subcol; j++,l++)
       {
         submat[k][l]=mat[i][j];
       } 
     }

     printf("\nThe maximum size sub-matrix is: \n");
     for(i=0; i<temprow; i++)
     {
       for(j=0; j<tempcol; j++)
       {
         printf("%d\t",submat[i][j]);
       }
       printf("\n");
     }
   }

   /*
   Output:

   Enter the row size: 6
   Enter the column size: 5
   Enter the 30 elements for 6x5 matrix: 
   0 1 0 1 1
   1 1 1 1 0
   1 1 1 1 0
   1 1 1 1 0
   1 1 1 1 1
   0 1 0 1 0

   The given array in matrix form is: 
   0	   1	   0	   1	   1	
   1	   1	   1	   1	   0	
   1	   1	   1	   1	   0	
   1	   1	   1	   1	   0	
   1	   1	   1	   1	   1	
   0	   1	   0	   1	   0	

   The maximum size sub-matrix is: 
   1	   1	   1	   1	
   1	   1	   1	   1	
   1	   1	   1	   1	
   1	   1	   1	   1	
   */
