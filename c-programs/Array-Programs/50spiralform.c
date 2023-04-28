   //50. Write a C program to print a matrix in spiral form.

   #include<stdio.h>
   void main()
   {
     int row, col, i, j, k=0,temp=0,size,odd;
     printf("Enter the row size: ");
     scanf("%d",&row);
     printf("Enter the column size: ");
     scanf("%d",&col);
     odd=col-1;
     size=row*col;
     int mat[row][col],result[size];
     printf("Enter the %d values for %dx%d matrix:\n",row*col,row,col);
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         scanf("%d",&mat[i][j]);
       }
     }
     printf("\nThe Given Matrix is:\n");
     for(i=0; i<row; i++)
     {
       for(j=0; j<col; j++)
       {
         printf("%d\t",mat[i][j]);
       }
       printf("\n");
     }
     printf("Matrix in spiral form is: \n");
     i=j=0;
     START:
     if(temp==0 || temp==4){
     for(;j<col && (k<=size-1); j++)
     {
       temp=1;                                        // printf("\ni=%d,j=%d\n",i,j);
       printf("%d, ",mat[i][j]);
       result[k++]=mat[i][j];
     }}
     i++, j--;
      if(temp==1) {                                       // printf("\ni=%d,j=%d\n",i,j);
     for(;i<row && (k<=size-1); i++)
     {
       temp=2;                                             //printf("\ni=%d,j=%d\n",i,j);
       printf("%d, ",mat[i][j]);
       result[k++]=mat[i][j];     
     }}
     i--,j--;
     if(temp==2 )  {                                         //  printf("\ni=%d,j=%d\n",i,j);
     for(;j>=0 && (k<=size-1); j--) 
     {
       temp=3;                                               //  printf("\ni=%d,j=%d\n",i,j);
       printf("%d, ",mat[i][j]);
       result[k++]=mat[i][j];
     }}
     i--,j++;
     if(temp==3 ) {                                                   //  printf("\ni=%d,j=%d\n",i,j);
     for(; i>j && (k<=size-1); i--)
     {
       temp=4;                                                    // printf("\ni=%d,j=%d\n",i,j);
       printf("%d, ",mat[i][j]);
       result[k++]=mat[i][j];
     }}
     i++,j=i,row--,col--;
                                                               //  printf("\ni=%d,j=%d\n",i,j);
                                                             // printf("\n\nrow=%d, col=%d\n\n",row,col);
     if(col>=0 && row >=0){goto START;}
     printf("\nk=%d\n",k);
   }


   Output:

   Enter the row size: 4
   Enter the column size: 5
   Enter the 20 values for 4x5 matrix:
   1 2 3 4 5
   6 7 8 9 10
   11 12 13 14 15
   16 17 18 19 20

   The Given Matrix is:
   1       2       3       4       5
   6       7       8       9       10
   11      12      13      14      15
   16      17      18      19      20
   Matrix in spiral form is: 
   1, 2, 3, 4, 5, 10, 15, 20, 19, 18, 17, 16, 11, 6, 7, 8, 9, 14, 13, 12, 
