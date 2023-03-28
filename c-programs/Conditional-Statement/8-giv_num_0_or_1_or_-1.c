//1. the value of n is 0 or 1 or -1

#include <stdio.h>
void main()
{
  int m;
  printf("Input the integer value: ");
  scanf("%d",&m);
  if(m>0){printf("The value of n %d\n",1);}
  else if(m==0){printf("The value of n %d\n",0);}
  else {printf("The value of n %d\n",-1);}
}
