// to Check Whether a Number can be Express as Sum of Two Prime 

#include <stdio.h>
void main()
{
  int num,i,j,k,l,count;
  printf("Input the Number: ");  
  scanf("%d",&num);
  
  for(i=num-1; i>=1; i--)
  {
    
    for(j=1; j<=num-1; j++)
    {
      count=0;
      if(i+j==num)
      {
        for(k=1; k<=i; k++)
          {if(i%k==0){count++;}}
        for(l=1; l<=j; l++)
          {if(j%l==0){count++;}}
      }
      if(count==4)
      {printf("%d = %d + %d\n",num,i,j);}
    }
  }
}
