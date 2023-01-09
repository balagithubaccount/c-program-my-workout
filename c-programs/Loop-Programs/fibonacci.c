

// to display the first n terms of Fibonacci series. 

#include <stdio.h>
void main()
{ 
  int a=0,b=1,c,i,terms;
  printf("Input the terms: ");
  scanf("%d",&terms);
  printf("Here is the Fibonacci series upto %d terms: \n",terms);
  printf("%d %d ",a,b);
  c=a+b;
  for(i=1; i<=terms-2; i++)
  {
    printf("%d ",c);
    a=b;
    b=c;
    c=a+b;
  }
  printf("\n");

}
/*
Output:

Input the terms: 8
Here is the Fibonacci series upto 8 terms: 
0 1 1 2 3 5 8 13 

*/