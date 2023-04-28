//33.Write a C program To find the majority element of an array.

#include<stdio.h>
void main()
{
  int size, i, j, majority, count;
  printf("Enter the array size: ");
  scanf("%d",&size);
  int array[size],maj[size];
  printf("Enter the elements: \n");
  for(i=0; i<size; i++)
  {
     printf("Element array[%d]: ",i);
     scanf("%d",&array[i]);
  }
  for(i=0; i<size; i++)
  {
    count=0;
    for(j=0; j<size; j++)
    {
      if(array[i]==array[j])
        count++;
    }
    maj[i]=count;
  }
  majority=0;
  for(i=0; i<size; i++)
  {
    if(majority<maj[i])
    {     
      majority=maj[i];
      j=i;
    }
  }
  if(majority>size/2)
    printf("Majority Element: %d.\n",array[j]);
  else
    printf("There are no Majority Elements in the given array.\n");
}


/*
Output:

Enter the array size: 8
Enter the elements: 
Element array[0]: 4
Element array[1]: 8
Element array[2]: 4
Element array[3]: 6
Element array[4]: 7 
Element array[5]: 4
Element array[6]: 4
Element array[7]: 8
There are no Majority Elements in the given array.

*/
