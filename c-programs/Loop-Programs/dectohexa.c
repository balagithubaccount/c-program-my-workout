   // to convert a decimal number to hexadecimal

   #include<stdio.h>
   void main() 
   {
     int dec, j, i=0, r;
     char arr[50];
     printf("Enter the decimal number: ");
     scanf("%d",&dec);

     for(j=dec; dec!=0; dec=dec/16)
     {
       r=dec % 16;
       if(r<10)
       {
         arr[i]='0'+r;
       }
       else
       {
         arr[i]='A'+(r-10);
       }
       i++;
     }
     printf("The equivalent Hexadecimal Number : ");
     for(i=i-1; i>=0; i--)
     {
       printf("%c",arr[i]);
     }
     printf("\n");
   }

   Output:

   Enter the decimal number: 79
   The equivalent Hexadecimal Number : 4F

