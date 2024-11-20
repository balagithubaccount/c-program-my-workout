//convert a binary number to octal.

#include<stdio.h>
void main()
{
  long int num, term, r, rem, place, oct, list, sum;
  printf("Input the Binary Number: ");
  scanf("%ld",&num);
  list=1,sum=0;

  for(term=num; num!=0; num=num/1000)
  {  
    oct=0,place=1;
    r=num%1000;
    for(term=r; r!=0; r=r/10)
    {
      rem=r%10;
      oct=oct+(rem*place);
      place=place*2;
    }
    sum=sum+(oct*list);
    list*=10;
  }
  printf("The octal number is: %ld\n",sum);
}
