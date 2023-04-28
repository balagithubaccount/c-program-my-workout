// To read 10 numbers from keyboard and fint their sum and average.

#include <stdio.h>
int main()
{
    float avr, sum =0;
    for(int i=1; i<=10; i++)
    {
        printf("Enter %d number: ",i);
        scanf("%f",&avr);
        sum = sum + avr;
    }
    avr = sum / 10;
    printf("sum is: %f\nAverage is: %.3f\n",sum, avr);
    
    return 0;
}

/*
Sample Output:

Enter 1 number: 2
Enter 2 number: 5
Enter 3 number: 7
Enter 4 number: 9
Enter 5 number: 1
Enter 6 number: 3
Enter 7 number: 7
Enter 8 number: 4
Enter 9 number: 5
Enter 10 number: 9
sum is: 52.000000
Average is: 5.200

*/