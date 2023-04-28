//to find Strong Numbers within a range of numbers.

#include <stdio.h>
void main()
{
  int start,end, term, num, sum, fac, r, i;
  printf("Input the starting number: ");
  scanf("%d",&start);
  printf("Input the ending number: ");
  scanf("%d",&end);
  
  for(term=start; term<=end; term++)
  {
    sum=0;
    num=term;
    for(num=num; num!=0; num=num/10)
    {
      fac=1;
      r=num%10;
      for(i=r; r>0; r--)
      {
        fac=fac*r;
      }
      sum=sum+fac;
    }
    if(sum==term)
     {
      printf("%d ",term);
     }
  }
}
