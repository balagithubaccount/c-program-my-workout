//to convert an octal number to a decimal without using an array.

#include <stdio.h>
void main()
{
  int num,term,dec,r,place;
  dec=0; place=1;
  printf("Input the octal number (using 0-7): ");
  scanf("%d",&num);
  for(term=num; num!=0; num=num/10)
  {
    r=num%10;
    dec=dec+(r*place);
    place=place*8;
  }
  printf("The decimal number is: %d\n",dec);
}
