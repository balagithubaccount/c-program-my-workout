   //67. Write a C program to search an element in a row wise and column wise sorted matrix.

   #include<stdio.h>
   void main()
   {
     int row, col, i, j, num, temp=0;
     printf("Enter the row size: ");
     scanf("%d",&row);
     printf("Enter the column size: ");
     scanf("%d",&col);
     int mat[row][col];
     printf("Enter the %d Elements: \n",row*col);
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         scanf("%d",&mat[i][j]);
       }
     }
     printf("The Given matrix is: \n");
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         printf("%d\t",mat[i][j]);
       }
       printf("\n");
     }
     printf("Input The given value for searching is: ");
     scanf("%d",&num);
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       { temp=0;
          if(mat[i][j]==num)
          {
            temp=1;
            printf("The element %d Found at the position in the matrix is: %d, %d\n",num,i,j);
            break;
          }
       }
       if(temp==1){ break; }
     }
      if(temp!=1)
       {
         printf("\nThe searching number %d is not found at the given matrix.\n",num);
         
       }
   }
  
   /*
   Output:

   Enter the row size: 4
   Enter the column size: 4
   Enter the 16 Elements: 
   15 23 31 39
   18 26 36 43
   25 28 37 48
   30 34 39 50
   The Given matrix is: 
   15	   23	   31	   39	
   18	   26	   36	   43	
   25	   28	   37	   48	
   30	   34	   39	   50	
   Input The given value for searching is: 37
   The element 37 Found at the position in the matrix is: 2, 2

   */
