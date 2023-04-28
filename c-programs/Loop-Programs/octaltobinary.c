// to convert an octal number into binary.

#include<stdio.h>
void main()
{
  long int num,term, r, rem, bin,place,sum,list;
  printf("Input an octal number: ");
  scanf("%ld",&num);
  sum=0, list=1;
  for(term=num; num!=0; num=num/10)
  {
    r=num%10, place=1, bin=0;
    for(term=r; r!=0; r=r/2)
    {
      rem=r%2;
      bin=bin+(rem*place); 
      place=place*10;
    }
    sum=sum+(bin*list); 
    list*=1000;
  }
  printf("The Binary number is: %ld\n",sum);
}
