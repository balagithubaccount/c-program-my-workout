//10. Write a C program to to separate odd and even integers in separate arrays.

#include<stdio.h>
void main()
{
  int num,iter,counteven=0,countodd=0;
  printf("Enter the total numbers: ");
  scanf("%d",&num);
  int mainarr[num],evenarr[num],oddarr[num];
  printf("Enter the %d values: \n",num);
  for(iter=0; iter<num; iter++)
  {
    printf("Enter element %d: ",iter);
    scanf("%d",&mainarr[iter]);

    if(mainarr[iter]%2==0)
    {
      evenarr[counteven]=mainarr[iter];
      counteven++;
    }
    else
    {
      oddarr[countodd]=mainarr[iter];
      countodd++;
    }
  }
  printf("The Even Elements are:\n");
  for(iter=0; iter<counteven; iter++)
   printf("%d ",evenarr[iter]);

  printf("\nThe Odd Elements are:\n");
  for(iter=0; iter<countodd; iter++)
   printf("%d ",oddarr[iter]);

  printf("\n");  
}

Output:

Enter the total numbers: 5
Enter the 5 values: 
Enter element 0: 25
Enter element 1: 47
Enter element 2: 42
Enter element 3: 56
Enter element 4: 32
The Even Elements are:
42 56 32 
The Odd Elements are:
25 47 

