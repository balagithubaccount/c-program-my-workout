// sum of the series

#include <stdio.h>
void main()
{
  int n,x,a,b,f,count=0;
  float s,sum=0,c,fac=1;
  printf("Input the terms: ");
  scanf("%d",&n);
  printf("Input the value of X: ");
  scanf("%d",&x);

  for(a=1;a<n;a++)
  {
     fac=1,c=1;
     for(b=1; b<=a*2;b++)
     {
       c=c*x;
       
     }
    
     f=a*2;
     for(b=1; b<=f; b++)
     {
       fac = fac*b;
       
     }
      
      s=c/fac;
      
      count++;
    if(count%2==0)
     {
       s=1*s;
     }
    else
     {
       s=(-1)*s;
     }
    sum=sum+s;
    
  }
   sum=sum+1;
   printf("The value of x: %d\n",x);
   printf("Number of terms: %d\n",n);
   printf("The sum is: %f\n",sum);

}
