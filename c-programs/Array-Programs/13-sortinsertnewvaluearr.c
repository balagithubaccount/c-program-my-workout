//13. Write a program in C to insert New value in the array

#include<stdio.h>
void main()
{
  int num,i,j,temp;
  printf("Enter the total elements in array: ");
  scanf("%d",&num);
  num=num+1;
  int insertarr[num];
  printf("Enter the %d values:\n",num-1);
  for(i=0; i<num-1; i++)
  {
    printf("element %d: ",i);
    scanf("%d",&insertarr[i]);
  }
  printf("Input the value to be inserted: ");
  scanf("%d",&insertarr[num-1]);
  printf("The exist array list is:\n");
  for(i=0; i<num-1; i++)
   printf("%d ",insertarr[i]);
  printf("\nAfter inserted the list is:\n");
  for(i=0; i<num; i++)
  {
    for(j=i+1; j<num; j++)
    {
      if(insertarr[i]>insertarr[j])
      {
        temp=insertarr[j];
        insertarr[j]=insertarr[i];
        insertarr[i]=temp;
      }
    }
  }
  for(i=0; i<num; i++)
    printf("%d ",insertarr[i]);
  printf("\n");
}

output:

Enter the total elements in array: 5
Enter the 5 values:
element 0: 2
element 1: 5
element 2: 7
element 3: 9
element 4: 11
Input the value to be inserted: 8
The exist array list is:
2 5 7 9 11 
After inserted the list is:
2 5 7 8 9 11 

