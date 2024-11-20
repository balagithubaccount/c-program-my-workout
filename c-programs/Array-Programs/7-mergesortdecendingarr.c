//7. Write a program in C to merge two arrays of same size sorted in decending order

#include<stdio.h>
void main()
{
  int size,i,merge,temp;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  merge=size+size;
  int arrone[size],arrtwo[size],arrmerge[merge];
  printf("Enter the element of first array:\n");
  for(i=0; i<size; i++)
  {
    printf("%d element: ",i);
    scanf("%d",&arrone[i]);
    arrmerge[i]=arrone[i];
  }
  printf("Enter the elements in second array:\n");
  for(i=0; i<size; i++)
  {
    printf("%d element: ",i);
    scanf("%d",&arrone[i]);
    arrmerge[i+size]=arrone[i];
  }
  printf("merged arrays is: ");
  for(i=0; i<merge; i++)
  {
    printf("%d ",arrmerge[i]);
  }printf("\n");
  for(i=0; i<merge; i++)
  {
     for(int j=i+1; j<merge; j++)
     {
       if(arrmerge[i]<arrmerge[j])
       {
         temp=arrmerge[i];
         arrmerge[i]=arrmerge[j];
         arrmerge[j]=temp;
       }
     }
  }
  

  printf("Sorted in decending order of the array : ");
  for(i=0; i<merge; i++)
    printf("%d ",arrmerge[i]);
  printf("\n");
  
}



Output:


Enter the size of the array:3
Enter the element of first array:
0 element: 1
1 element: 2
2 element: 3
Enter the elements in second array:
0 element: 1
1 element: 2
2 element: 3
merged arrays is: 1 2 3 1 2 3 
Sorted in decending order of the array : 3 3 2 2 1 1 

