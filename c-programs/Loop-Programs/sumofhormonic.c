// sumofhormonic series in  n terms...
 
#include <stdio.h>
void main()
{
  int n,i,a=1;
  float t,sum=0,d=1;
  printf("Input the number of terms: ");
  scanf("%d",&n);
  
  for(i=1; i<=n; i++)
  {
    printf("%d/%d+",a,i);
  }
  printf("\n");
  for(i=1;i<=n;i++)
  {
    t=1/d;
    d++;
    sum=sum+t;
  }
  printf("Sum of series upto %d terms : %f.\n",n,sum);
}

/*

Output:

Input the number of terms: 7
1/1+1/2+1/3+1/4+1/5+1/6+1/7+
Sum of series upto 7 terms : 2.592857.*/

