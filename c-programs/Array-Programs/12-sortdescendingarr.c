//12. Write a program in C to sort elements of the array in descending order. 

#include<stdio.h>
void main()
{
  int num,i,j,temp;
  printf("Input the total elements: ");
  scanf("%d",&num);
  int element[num];
  printf("Enter the %d elements: \n",num);
  for(i=0; i<num; i++)
  {
    printf("element %d : ",i);
    scanf("%d",&element[i]);
  }
  for(i=0; i<num; i++)  
  {
    for(j=i+1; j<num; j++)
    {
      if(element[i]<element[j])
      {
        temp=element[j];
        element[j]=element[i];
        element[i]=temp;
      }
    }
  }
  printf("Elements of array sorted in descending order:\n");
  for(i=0; i<num; i++)
   printf("%d ",element[i]);
  printf("\n");
}

Output:

Input the total elements: 5
Enter the 5 elements: 
element 0 : 5
element 1 : 4
element 2 : 9
element 3 : 1
element 4 : 8
Elements of array sorted in descending order:
9 8 5 4 1 

