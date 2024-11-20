   //9. Write a program in C to find the maximum and minimum element in an array

#include<stdio.h>
void main()
{
  int num, iter, max, min;
  printf("Input the total numbers stored in array: ");
  scanf("%d",&num);
  int maxmin[num];
  printf("Enter the %d values: \n",num);
  
  for(iter=0;  iter<num; iter++)
  {
    printf("element %d: ",iter);
    scanf("%d",&maxmin[iter]);
  }
  max=maxmin[0];
  min=maxmin[0];
  for(iter=0; iter<num; iter++)
  {
    if(max<maxmin[iter])
       max=maxmin[iter];
    if(min>maxmin[iter])
       min=maxmin[iter];
  }
  printf("Maximum element is: %d\n",max);
  printf("Minimum element is: %d\n",min); 
}

 Output:

Input the total numbers stored in array: 5
Enter the 5 values: 
element 0: 3
element 1: 32
element 2: 23
element 3: 17
element 4: 2
Maximum element is: 32
Minimum element is: 2

