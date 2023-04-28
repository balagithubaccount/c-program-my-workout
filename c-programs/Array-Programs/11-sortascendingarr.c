   //11. Write a program in C to sort elements of array in ascending order.

   #include<stdio.h>
   void main()
   {
     int num,i,j,term;
     printf("Enter the total elements of an array: ");
     scanf("%d",&num);
     int elements[num];
     for(i=0; i<num; i++)
     {
       printf("Element %d: ",i);
       scanf("%d",&elements[i]);
     }
     for(i=0; i<num; i++)
     {
       for(j=i+1; j<num; j++)
       {
         if(elements[i]>elements[j])
          {
             term=elements[j];
             elements[j]=elements[i];
             elements[i]=term;
          }
       }
     }
     printf("Elements of array sorted in ascending order:\n");
     for(i=0; i<num; i++)
      printf("%d ",elements[i]);
  
      printf("\n");
   }

   Output;

   Enter the total elements of an array: 5
   Element 0: 2
   Element 1: 7
   Element 2: 4
   Element 3: 5
   Element 4: 9
   Elements of array sorted in ascending order:
   2 4 5 7 9 
