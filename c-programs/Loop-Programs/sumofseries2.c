//sum of series 1+x+x^2/2!+x^3/3!+....

#include <stdio.h>
void main()
{
  int n,x,i,a;
  float c=1,fac=1,s,sum=0;
  printf("Input the number of terms: ");
  scanf("%d",&n);
  printf("Input the x value: ");
  scanf("%d",&x);
  
  for(a=1;a<n;a++)
  { c=1,fac=1;
    for(i=1;i<=a;i++)
    {
      c=c*x;
    }
    for(i=1;i<=a;i++)
    {
      fac=fac*i;
    }
    s=c/fac;
    sum=sum+s;
  }
    sum=sum+1;
    printf("The sum of the series %d terms is: %f\n",n,sum);
  
}
