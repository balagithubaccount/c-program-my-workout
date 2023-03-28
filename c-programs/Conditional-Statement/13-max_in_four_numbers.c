#include <stdio.h>
void main()
{
  int a[4],e;
  printf("Enter the four value: \n");
  for(e=0; e<4;e++)
    { 
      printf("Enter the %d value: ",e);
      scanf("%d",&a[e]);
    }
  for(e=0; e<4; e++)

    { 
     printf("%d value is = %d\n",e,a[e]);
    }      

    if(a[0]>a[1] && a[0]>a[2] && a[0]>a[3])
       {
           printf("big %d\n",a[0]);
       }
    else if(a[1]>a[0] && a[1]>a[2] && a[1]>a[3])
       {
            printf("big %d\n",a[1]);
       }
    else if(a[2]>a[0] && a[2]>a[1] && a[2]>a[3])
       {
            printf("big %d\n",a[2]); 
       }
    else
       {
            printf("big %d\n",a[3]);
       }
     
}



