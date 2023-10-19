// write a program to calculate average of three numbers?
/********************************************************
 statement = average of third number
 programmer name = taniya yadav
********************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a,b,c,sum;
    float avg;

    printf("\n enter the three number of:");
    scanf("%d %d %d",&a, &b, &c);

    sum = a+b+c;
    
    avg = sum/3;
    
    printf("\n the sum of three number=%d",sum);
    printf("\n the average=%.2f",avg);

    return 0;
}
