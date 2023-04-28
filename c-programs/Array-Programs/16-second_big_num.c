//16.Write a C program to find the second largest element in an array.
  
#include<stdio.h>
void main()
{
  int size,i,j,temp,big_num;
  printf("Enter the array size: ");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the Elements: \n");
  for(i=0; i<size; i++)
  {
     printf("Element %d: ",i);
     scanf("%d",&arr[i]);
  }
  for(i=0; i<size; i++)
  {
    for(j=i+1; j<size; j++)
    {
      if(arr[i]<arr[j])
      {
         temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
      }
    }
  }
  big_num=arr[0];
  for(i=1; i<size; i++)
  {
    if(big_num>arr[i])
    {
     printf("Second Largest element is: %d\n",arr[i]);
     break;
    }
  }
} 

Output:

bala@bala-Lenovo-E41-25:~/Documents/107array$ ./output
Enter the array size: 10
Enter the Elements: 
Element 0: 3
Element 1: 5
Element 2: 6
Element 3: 1
Element 4: 2
Element 5: 7
Element 6: 8
Element 7: 9
Element 8: 11
Element 9: 0
Second Largest element is: 9

