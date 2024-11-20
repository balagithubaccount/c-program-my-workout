//to find the Sum of GP series. 

#include <stdio.h>
void main()
{
  float num,start,terms,ratio,sum=0,count=1,prod;
  printf("Input the first number of the G.P.: ");
  scanf("%f",&start);
  printf("Input the terms: ");
  scanf("%f",&terms);
  printf("Input the ratio: ");
  scanf("%f",&ratio);
  printf("%f ",start);
  sum=sum+start;
  prod=start*ratio;
  
  for(num=1; num>0; num++)
  {
    printf("%f ",prod);
    sum=sum+prod;
    prod=prod*ratio;
    count++;
    if(count==terms)
    break;
  }

  printf("\nThe sum of the G.P.series: %f\n",sum);
}
