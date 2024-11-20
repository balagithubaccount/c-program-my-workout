// to find HCF (Highest Common Factor) of two numbers. 

#include <stdio.h>
void main()
{
  int num1,num2,hcf,i,j;
  printf("Input the 1st number of HCF: ");
  scanf("%d",&num1);
  printf("Input the 2nd number of HCF: ");
  scanf("%d",&num2);

  j=(num1<num2)? num1: num2;
  for(i=1; i<=j; i++)
  {
    if(num1%i==0 && num2%i==0)
    {
      hcf=i;
    }
  }
  printf("HCF of %d and %d is: %d\n",num1,num2,hcf);
}

/*
Sample Output:

Input the 1st number of HCF: 6
Input the 2nd number of HCF: 8
HCF of 6 and 8 is: 2

*/