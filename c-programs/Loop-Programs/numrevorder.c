//to display the number in reverse order.

#include <stdio.h>
void main()
{
  int num,x,r;
  printf("Input the number: ");
  scanf("%d",&num);
  printf("The number in reverse order is: ");

  for(x=num; num!=0; num=num/10)
  {
    r=num%10;
    printf("%d",r);
  }
  printf("\n");
}

