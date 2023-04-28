// pattern like a pyramid with numbers increased by 1.

#include <stdio.h>
void main()
{
  int i,j,k=1,s=7;
  for(i=1;i<=4;i++)
  {
    for(j=1; j<=s;j++)
    {
      printf(" ");
    } 
    for(j=1;j<=i;j++)
      {
       printf("%d ",k++);
      
      }
    printf("\n");
    s--;

     

  }

}
