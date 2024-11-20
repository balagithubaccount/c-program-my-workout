   //21. Write a C program find Multiplication of two square matrices...

  #include<stdio.h>
  void main()
  {
  int i,j,k,size;
  printf("Enter the matrix size:\n");
  scanf("%d",&size);
  int mat1[size][size],mat2[size][size],mult[size][size];
  printf("Enter the elements for matrix 1:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      scanf("%d",&mat1[i][j]);
    }
  }
  printf("Enter the elements for matrix 2:\n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      scanf("%d",&mat2[i][j]);
    }
  }
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      mult[i][j]=0;
      for(k=0; k<size; k++)
      {
         mult[i][j]=mult[i][j]+mat1[i][k]*mat2[k][j];
      }
    }
  }
  printf("Multiplication of two matrices is: \n");
  for(i=0; i<size; i++)
  {
    for(j=0; j<size; j++)
    {
      printf("%d\t",mult[i][j]);
    }
    printf("\n");
  }
}




/*
Output:

Enter the matrix size:
4
Enter the elements for matrix 1:
1 1 1 1
2 2 2 2
3 3 3 3
1 1 1 1
Enter the elements for matrix 2:
2 2 2 2
3 3 3 3
1 1 1 1
2 2 2 2
Multiplication of two matrices is: 
8	8	8	8	
16	16	16	16	
24	24	24	24	
8	8	8	8	
*/
