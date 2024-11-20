//Multiplication table vertically
#include <stdio.h>
void main()
{
  int a,b,c,n;
  printf("Input the multiplication table start from 1-");
  scanf("%d",&b);
  printf("multiplication table from 1-");
  scanf("%d",&n);
  
  for(a=1;a<=b;a++)
  {
   for(c=1;c<=n;c++)
   {
    printf("%dx%d=%d,",c,a,c*a);
   }
   printf("\n");
  }
}

/*
Output:

Input the multiplication table start from 1-10
multiplication table from 1-4
1x1=1,2x1=2,3x1=3,4x1=4,
1x2=2,2x2=4,3x2=6,4x2=8,
1x3=3,2x3=6,3x3=9,4x3=12,
1x4=4,2x4=8,3x4=12,4x4=16,
1x5=5,2x5=10,3x5=15,4x5=20,
1x6=6,2x6=12,3x6=18,4x6=24,
1x7=7,2x7=14,3x7=21,4x7=28,
1x8=8,2x8=16,3x8=24,4x8=32,
1x9=9,2x9=18,3x9=27,4x9=36,
1x10=10,2x10=20,3x10=30,4x10=40,
*/
