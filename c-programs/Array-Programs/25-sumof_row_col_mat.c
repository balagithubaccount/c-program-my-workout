   //25. Write a C program to find sum of rows and columns of a matrix.

  #include<stdio.h>
  void main()
  {
  int size, i, j, k=0, sum;
  printf("Enter the size of the square matrix: ");
  scanf("%d",&size);
  int matrix[size][size];
  int add[size*2];
  printf("Enter the elements: \n");
  for(i=0; i<size; i++)
  {
     sum=0;
     for(j=0; j<size; j++)
     {
       scanf("%d",&matrix[i][j]);
       sum=sum+matrix[i][j];
     }
     add[k]=sum;
     k++;
  }
  for(i=0; i<size; i++)
  {
    sum=0;
    for(j=0; j<size; j++)
    {
      sum=sum+matrix[j][i];
    }
    add[k]=sum;
    k++;
  }  
  k=0;
  printf("The sum of the row and columns of the matrix is: \n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",matrix[i][j]);
    }
    printf("%d\n",add[k]);
    k++;
  }
  printf("\n");
  for(i=0; i<size; i++,k++)
  {
    printf("%d\t",add[k]);
  }
  printf("\n");
  
  }

  /*
  Output: 

  Enter the size of the square matrix: 3
  Enter the elements: 
  1 2 3
  4 5 6
  7 8 9
  The sum of the row and columns of the matrix is: 
  1	  2	  3	  6
  4	  5	  6	  15
  7	  8	  9	  24

  12	  15	  18	



  
          
     #c #cprogramming #cprogramminglanguage #basics #compiler
     #fundamentals #operators #programming #programmer #code
     #output #keyboard #logic #keywords #syntax #conditions
     #variables #values #datatypes #format #biggest #find 
     #table #terms #printing #integer #post #linkedin
     #research #labs #else #three #enter #number #h #b #pattern 
     #asterisk #row #column #like #printed */
