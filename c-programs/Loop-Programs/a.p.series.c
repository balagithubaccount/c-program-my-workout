/* to find out the sum of an A.P. series
  Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 10
Input the common difference of A.P. series: 4
Expected Output :
The Sum of the A.P. series are :
1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190 */

#include <stdio.h>
void main()
{
  int start, terms, diff,sum=0,d,count=1,i;
  printf("Input the starting number: ");
  scanf("%d",&start);
  printf("Input the number of terms: ");
  scanf("%d",&terms);
  printf("Input the difference: ");
  scanf("%d",&diff);
  d=start+diff;
  printf("%d+",start);
  sum=sum+start;
  for(i=start; start>0; i++)
  {
    printf("%d+",d);
    sum=sum+d;
    d=d+diff;
    count++;
    if(count==terms)
    break;
  }
  printf("0=%d\n",sum);
}
