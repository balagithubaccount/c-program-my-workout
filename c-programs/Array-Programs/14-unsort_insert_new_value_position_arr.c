//14. Write a C program to insert New value in the array 

#include<stdio.h>
void main()
{
  int num,i,j,k;
  printf("Input the total element of an array: ");
  scanf("%d",&num);
  num=num+1;
  int insertarr[num];
  printf("Input the %d values: \n",num-1);
  for(i=0; i<num-1; i++) 
  {
    printf("Element %d: ",i);
    scanf("%d",&insertarr[i]);
  }
  printf("Input the value to bbe inserted: ");
  scanf("%d",&insertarr[num-1]);
  
  printf("Input the Position: ");
  scanf("%d",&j);
  
  printf("The current list of the array: \n");
  for(i=0; i<num-1; i++)
  {
    printf("%d ",insertarr[i]);
  }
  printf("\nAfter insert the element the new array:\n");
  for(i=0; i<num-1; i++)
  {
    if(i==(j-1))
    {
      j=insertarr[i];
      insertarr[i]=insertarr[num-1];
      for(k=num-1; k>i; k--)
      {
        if(k==(i+1))
           insertarr[i+1]=j;
        else
           insertarr[k]=insertarr[k-1];
      }break;
    }
  }
  for(i=0; i<num; i++)
  {
    printf("%d ",insertarr[i]);
  }
  printf("\n");
}
/*
Output:
Input the total element of an array: 5
Input the 5 values: 
Element 0: 5
Element 1: 4
Element 2: 1
Element 3: 2
Element 4: 3
Input the value to bbe inserted: 3
Input the Position: 3
The current list of the array: 
5 4 1 2 3 
After insert the element the new array:
5 4 3 1 2 3 



#include<stdio.h>
void main()
{
  int num,i,j,pos;
  printf("Enter the array size: ");
  scanf("%d",&num);
  num=num+1;
  int mainarr[num],copyarr[num-1];
  printf("Enter the %d values: \n",num-1);
  for(i=0; i<num-1; i++)
  {
    printf("element %d: ",i);
    scanf("%d",&mainarr[i]);
    copyarr[i]=mainarr[i];
  }
  printf("Input the insert value and the position: ");
  scanf("%d%d",&mainarr[num-1],&pos);
  mainarr[pos-1]=mainarr[num-1];

  printf("Before insert the array list is:\n");
  for(i=0; i<num-1; i++)
   printf("%d ",copyarr[i]);
  for(i=0; i<num; i++)
  {
   if(i==(pos-1))
    {
     mainarr[i]=mainarr[num-1];
     j=0;
    }
   else if(j==0)
      mainarr[i+1]=copyarr[i];
   else if(i!=(pos-1))
     mainarr[i]=copyarr[i];
  }
  printf("After insert the element the new array:\n");
  for(i=0; i<num; i++)
   printf("%d ",mainarr[i]);
  printf("\n");  
}*/
