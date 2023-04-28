// to display the n terms of square natural number and their sum.
//1 4 9 16 ... n Terms

#include <stdio.h>
void main()
{
  int n,a,i,sqr=1,count=0,sum=0;
  printf("Input the number of terms: ");
  scanf("%d",&n);
  for(a=1;a>0;a++)
  { sqr=1;
    for(i=1;i<3;i++)
    {
      sqr=sqr*a;
    }
     count++;
     printf("%d ",sqr);
     sum=sum+sqr;
     if(count==n)
     {break;}
  }
   printf("\n"); 
   printf("The sum of %d terms of natural numbers is: %d\n",n,sum);
}

