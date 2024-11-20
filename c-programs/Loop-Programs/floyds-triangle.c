
//Write a program in C to print the Floyd's Triangle. Go to the editor

// 1 
// 01
// 101 
// 0101 
// 10101

#include <stdio.h>
void main()
{
  int a,b,c,d,n;
  printf("Input number of rows: ");
  scanf("%d",&n);
 
  for(a=1;a<=n;a++)
  {
    if(a%2==0)
      {c=0,d=1;}

    else{c=1,d=0;}
      
    for(b=1;b<=a;b++)
   {
     if(b%2==0)
       {printf("%d",d);}
      
      else
       {printf("%d",c);}

   }
   printf("\n");
  }

 
}
 

