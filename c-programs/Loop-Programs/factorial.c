// factorial 

#include <stdio.h>
void main()
{
  int i,n,f=1;
  printf("Input the number: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("The factorial of %d is : %d\n",n,f);
}
/*
Output:

Input the number: 5
The factorial of 5 is : 120
*/