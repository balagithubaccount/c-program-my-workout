//18. write a C program to print 3x3 matrix.....

  #include<stdio.h>
  void main()
  {
    int i,j,matrix[3][3];
    printf("Enter the elements: \n");
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
          printf("Element [%d][%d]:",i,j);
          scanf("%d",&matrix[i][j]);
       }
    }
     printf("The matrix is:\n");
    for(i=0; i<3; i++)
    {
      for(j=0; j<3; j++)
      {
        printf("%d\t",matrix[i][j]);
      }
      printf("\n");
    }
  
  }

  /*
Output:

Enter the elements: 
Element [0][0]:3
Element [0][1]:5
Element [0][2]:1
Element [1][0]:6
Element [1][1]:8
Element [1][2]:4
Element [2][0]:2
Element [2][1]:1
Element [2][2]:8
The matrix is:
3	5	1	
6	8	4	
2	1	8	
*/
