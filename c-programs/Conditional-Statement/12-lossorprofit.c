
     //Write a C program to calculate profit and loss on a transaction.

     #include<stdio.h>
     void main()
     {
       float inves, gain;
       printf("Enter the Investment amount: ");
       scanf("%f",&inves);
       printf("Enter the Gain amount: ");
       scanf("%f",&gain);

       if(inves<gain)
         {
            printf("Your profit amount is: %f\nAnd no loss.\n",gain-inves);
         }
       else if(inves>gain)
         {
           printf("Your loss amount is: %f\nNo profit.\n",inves-gain);
         }
       else
         {
           printf("No profit and No loss,\n Just Experience.\n");
         }
     }
      
