//pattern like right triangle number increased by 1;

#include <stdio.h>
void main()
{
  int r,c,s=1,n;
  printf("enter the row: ");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
   for(c=1;c<=r;c++)
    {
     printf("%d ",s);
     s++;
    }
   printf("\n");

  }
}

/*
Output:

enter the row: 4
1 
2 3 
4 5 6 
7 8 9 10 
*/