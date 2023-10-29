// goto statement

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num, avg, sum;
    int i, n;
    printf("Maximum no. of inputs: ");
    scanf("%d", &n);

    // for loop
    for ( i = 1; i <=n; i++)
    {
    printf("Enter n%d:", i);
    scanf("%f", &num);
    if(num<0.0)
    goto jump;   /*control of the program moves to label jump */
    sum =sum+num;
    }
    jump:
    avg = sum / (i-1);
    printf("Average:%.2f", avg);
    return 0;
}
