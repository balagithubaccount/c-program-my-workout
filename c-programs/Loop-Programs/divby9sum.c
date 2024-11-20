//to find the number and sum of all integer between 100 and 200 which are divisible by 9.
#include <stdio.h>
void main()
{
  int i,sum=0;
  printf("Numbers between 200-300, divisible by 9: ");
  for(i=100; i<=200; i++)
  {
    if(i%9==0)
    {
      printf("%d ",i);
      sum=sum+i;
    }
  }
  printf("\nThe sum: %d.\n",sum);
}
