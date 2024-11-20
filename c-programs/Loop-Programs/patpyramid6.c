//Write a C Program to display the pattern like pyramid using the alphabet.

#include <stdio.h>
void main()
{
  int row,i,j,space,sp;
  printf("Input the Number of rows: ");
  scanf("%d",&row);
  space=row-1;
  row=row+65;
  
  for(i=65; i<row; i++)
  {
    for(sp=1; sp<=space; sp++)
      printf(" ");
    for(j=65; j<=i; j++)
      printf("%c",j);
    for(j=i-1; j>=65; j--)
      printf("%c",j);
    printf("\n");
    space--;
  }
}
