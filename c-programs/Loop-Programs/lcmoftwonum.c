// to find LCM of any two numbers.

#include <stdio.h>
void main()
{
  int num1,num2,i,j,lcm;
  printf("Input the 1st number of lcm: ");
  scanf("%d",&num1);
  printf("Input 2nd the number of lcm: ");
  scanf("%d",&num2);
  
  j=(num1>num2)? num1: num2;
  
  for(i=j; i>0; i+=j)
  {
    if(i%num1==0 && i%num2==0)
    {
      lcm=i;
      break;
    }
  }
  printf("Lcm of %d and %d is: %d\n",num1,num2,lcm);
  
}
