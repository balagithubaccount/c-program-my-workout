//15. Write a program in C to delete an element at desired position from an array. 

#include<stdio.h>
void main()
{
  int size,i,j,pos;
  printf("Input the array size: ");
  scanf("%d",&size);
  int iniarr[size],delarr[size-1];
  printf("Enter the %d values: \n",size);
  for(i=0; i<size; i++)
  {
    printf("Element %d: ",i);
    scanf("%d",&iniarr[i]);
  }
  printf("Input the position,where to delete: ");
  scanf("%d",&pos);
  pos-=1;
  printf("before delete the array list is:\n");
  for(i=0; i<size; i++)
   printf("%d ",iniarr[i]);
  printf("\nAfter delete the new array is:\n");
  for(i=0; i<size; i++)
  {
    if(i==pos)
    {
      delarr[i]=iniarr[i+1];
      j=1;
    }
    else if(j==1)
     delarr[i]=iniarr[i+1];
    else 
     delarr[i]=iniarr[i];
  }
  for(i=0; i<size-1; i++)
    printf("%d ",delarr[i]);
  printf("\n");
  
}
/*
output:
Input the array size: 6
Enter the 6 values: 
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Element 5: 9
Input the position,where to delete: 6
before delete the array list is:
1 2 3 4 5 9 
After delete the new array is:
1 2 3 4 5 */
