  //find the number of digits

  #include<stdio.h>
  void main()
  {
    int num;
    int iter,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(iter=num; num!=0; num=num/10)
    {
      count++;
    }
    printf("Total number of digits is %d\n",count);
  }

  output:
  Enter the number:87939
  Total number of digits is 5
