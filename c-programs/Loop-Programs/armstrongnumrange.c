//30.to find the Armstrong number for a given range of number. 

#include <stdio.h>
void main()
{
  int start, end, term, num, r, a, c, count=0, sum=0;
  printf("Input the starting number: ");
  scanf("%d",&start);
  printf("Input the ending number: ");
  scanf("%d",&end);
  printf("Armstrong number in given range are: ");//start =50, end =160
  
  for(num=start; num<=end; num++)                  //num=50
  {
      count=0; sum=0;
      for(term=num; num!=0; num=num/10)            // term=50
    {
     count++;
    
    }
     for(num=term; term!=0; term=term/10)             //num=50
   {
     r=term % 10;
     c=1;
     for(a=1; a<=count; a++)
     {
       c=c*r;
     }
     sum=sum+c;
   }
    if(sum==num)
     {printf("%d ",num);}
  }printf("\n");
}
