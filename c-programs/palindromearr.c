   //38) Palintrome

    #include<stdio.h>
    void main()
    {
      int palindrome[1],i,rem,sum=0;
      printf("Enter the number for to find the palindrome or not: ");
      scanf("%d",&palindrome[0]);
      for(i=palindrome[0]; palindrome[0]!=0; palindrome[0]/=10)
      {
      
        rem=palindrome[0]%10;
        sum=(sum*10)+rem;
      }
      if(sum==i)
      {
        printf("The given number %d is a palindrome.\n",i);
      }
      else
      {
         printf("The given number %d is not a palindrome.\n",i);
      }
    }

     /*
    Output 1:
 
    Enter the number for to find the palindrome or not: 12321
    The given number 12321 is a palindrome.

    Output 2:

    Enter the number for to find the palindrome or not: 1231
    The given number 1231 is not a palindrome.

 */
