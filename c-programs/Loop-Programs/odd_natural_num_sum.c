// n terms of odd natural number and teir sum
#include <stdio.h>
void main()
{
  int a,c=0,n,sum=0;
  printf("Input number of terms:");
  scanf("%d",&n);
  
  for(a=1;a>0;a++)
   {
    if(a%2!=0)
     {
       sum=sum+a;
       c++;
       printf("%d\n",a);
     }
    if(c==n)
     {break;}

   }
  printf("Sum of %d odd natural number is : %d.\n",n,sum);
 
}

/*
Output:

Input number of terms:5
1
3
5
7
9
Sum of 5 odd natural number is : 25.
*/