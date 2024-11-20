//8. Write a program in C to count the frequency of each element of an array. 
 

   #include<stdio.h>
   void main()
   {
     int total_element,i,j,count,k=0,exit,l;
     printf("Enter the total elements of an array: ");
     scanf("%d",&total_element);
     int arrelement[total_element],arrcopy[total_element],arrfreq[total_element];
     int checked[total_element];
     printf("Enter the %d values: \n",total_element);
     for(i=0; i<total_element; i++)
     {
       printf("element %d: ",i);
       scanf("%d",&arrelement[i]);
       arrcopy[i]=arrelement[i];
     }
     for(i=0; i<total_element; i++)
     {
       count=1, exit=0;
       for(l=0; l<k; l++)
       {
         if(arrelement[i]==checked[l])
           exit=1;
       }
       if(exit!=1)
       {
         for(j=0; j<total_element; j++)
         {
           if(j!=i && arrelement[i]==arrcopy[j])
             count++;
         }
         printf("%d occurs %d times\n",arrelement[i],count);
       }
       checked[k++]=arrelement[i];  
     }
     checked[k++]=arrelement[i];
   }
/*   
   Output:
 
   Enter the total elements of an array: 10
   Enter the 10 values: 
   element 0: 5
   element 1: 6
   element 2: 5
   element 3: 6
   element 4: 5
   element 5: 6
   element 6: 5
   element 7: 6
   element 8: 5
   element 9: 8
   5 occurs 5 times
   6 occurs 4 times
   8 occurs 1 times

  

        
    #c #cprogramming #cprogramminglanguage #basics #compiler
    #fundamentals #operators #programming #programmer #coding
    #output #keyboard #logic #keywords #syntax #conditions
    #variables #values #datatypes #format #biggest #find 
    #table #terms #printing #integer #post #linkedin
    #research #labs #else #three #enter #number #h #b */

