//n terms of even natural number and their sum

#include <stdio.h>
void main()
{
  int a,n,c=0,sum=0;
  printf("Enter the number: ");
  scanf("%d",&n);

  for(a=1;a>0;a++)
  {
    if(a%2==0)
     {
       printf("%d\n",a);
       c++;
       sum=sum+a;
       if(c==n)
       {break;}
     }
  }
   printf("Sum of %d even natural number is: %d\n",n,sum);
}
