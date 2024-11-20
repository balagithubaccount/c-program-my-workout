// pattern pyramid for same row same number;

#include<stdio.h>
void main()
{
  int i,j,s=7;
  for(i=1;i<=4;i++)
 {
  for(j=1;j<=s;j++)
  {
    printf(" ");
  }
  for(j=1;j<=i;j++)
  {
   printf("%d ",i);
  }
   printf("\n");
   s--;
 } 
}
