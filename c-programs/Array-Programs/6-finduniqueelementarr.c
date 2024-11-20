//6.Write a C program to find unique elements

  #include<stdio.h>
  void main()
  {
    int n,i,j,count;
    printf("Input the total number of elements in array: ");
    scanf("%d",&n);
    int unique[n];
    printf("Enter the %d values: \n",n);
    
    for(i=0; i<n; i++)
      scanf("%d",&unique[i]);

    for(i=0; i<n; i++)
    {
      count=0;
      for(j=0; j<n; j++)
      {
        if(unique[i]==unique[j])
           count++;
      }
      if(count<2)
       printf("%d\t",unique[i]);
    } 
  }

  output:
  
  Input the total number of elements in array: 7
  Enter the 7 values: 
  1 2 3 4 5 6 6
  1	2	3	4	5	
