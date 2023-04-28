//to convert a decimal number to hexadecimal. 

#include <stdio.h>
void main()
{
  int num,term,r,p1;
  char p2;
  printf("Input the Decimal number: ");
  scanf("%d",&num);
  for(term=num; num!=0; num=num/16)
  {
    r=num%16;
    if(r<=9){p1=r;}
    else if(r==10){p2='A';}
    else if(r==11){p2='B';}
    else if(r==12){p2='C';}
    else if(r==13){p2='D';}
    else if(r==14){p2='E';}
    else if(r==15){p2='F';}
    
  }
   printf("%d%c\n",p1,p2);
}
