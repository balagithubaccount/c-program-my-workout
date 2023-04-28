//to convert a decimal number into octal without using an array.


#include <stdio.h>
void main()
{
  int num, term, r,oct=0, place=1;
  printf("Input the decimal number: ");
  scanf("%d",&num);
  
  for(term=num; num!=0; num=num/8)
  {
    r=num%8;
    oct=oct+(r*place);
    place=place*10;
  }
  printf("Octal number is: %d\n",oct);
}
