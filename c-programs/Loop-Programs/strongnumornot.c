/*
   Strong Number:

        Strong number is a special number whose sum of the factorial of digits is equal to the original number.
   For Example:
        145 is strong number. Since, 1!+4!+5!=145.
*/







//to check whether a number is a Strong Number or not.

#include <stdio.h>
void main()
{
  int num, term, fac, f, i, sum, r;
  printf("Input the integer Number: ");
  scanf("%d",&num);
  sum=0;
  
  for(term=num; num!=0; num=num/10)
  {
    fac=1;
    r=num%10;
    for(i=r; r>0;r--)
    {
      fac=fac*r;
    }
    sum=sum+fac;
    
  } 
  if(sum==term)
  {
    printf("Input number %d is a Strong Number.\n",term);
  }
  else
  {
    printf("Input number %d is not a Strong Number.\n",term);
  }
}
