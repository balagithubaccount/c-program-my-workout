//9. To input three sides to check triangle is valid or not.

#include <stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the three values, for sides of a triangle: \n");
  scanf("%d%d%d",&a,&b,&c);
  printf("Three sides are a=%d, b=%d, c=%d\n",a,b,c);
  
  if(a+b>c && a+c>b && b+c>a)
   {
     printf("You entered values are 'Make a valid triangle'.\n");
   }
  else
   {printf("You entered values are 'Not make a valid triangle'.\n");}
}
