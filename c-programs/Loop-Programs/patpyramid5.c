// Write a program in C to display the such a pattern for n number of rows using a number which will start with the number 1 and the first 
//and a last number of each row will be 1.

#include <stdio.h>
void main()
{
  int row,space,sp,i,j;
  printf("Input the Number of rows: "); 
  scanf("%d",&row);
  space=row-1;
   
  for(i=1; i<=row; i++)
  {
    for(sp=1; sp<=space; sp++)
     printf(" ");
    for(j=1; j<=i; j++)
     printf("%d",j);
    for(j=i-1; j>=1; j--)
     printf("%d",j);
    printf("\n");
    space--;
  }
}
