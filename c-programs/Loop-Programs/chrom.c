//Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
/*
#include <stdio.h>
void main()
{
	float x,sum,t,d;
	int i,n;
	printf("Input the Value of x :");
	scanf("%f",&x);
	printf("Input the number of terms : ");
	scanf("%d",&n);
	sum =1; t = 1;
	for (i=1;i<n;i++)
	{
	  d = (2*i)*(2*i-1);
	  t = -t*x*x/d;
	  sum =sum+ t;
	}
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);
} 



//Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].


#include <stdio.h>

void main()
{
	float x,sum,no_row;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; no_row = 1;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*x/(float)i;
	  sum =sum+ no_row;
	}
	printf("\nThe sum  is : %f\n",sum);
} 


// Write a C program to check whether a given number is an armstrong number or not

#include <stdio.h>

void main(){
    int num,r,sum=0,temp;

    printf("Input  a number: ");
    scanf("%d",&num);

    for(temp=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number.\n",temp);
    else
         printf("%d is not an Armstrong number.\n",temp);

}
*/

#include <stdio.h>
void main()
{
  int a=10,b=10,c;
  c=a%b;  
  printf("%d\n",c);
}


