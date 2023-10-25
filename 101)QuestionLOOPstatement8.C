/* write a program to calculate sum of series (1/1+1/2+1/3+1/4+1/5+....) */
/*********************************************************
 * statement = sum of series
 * programmer name = taniya yadav
*****************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
    float num, i, sum=0;
    // taking input from user
    printf("enter the number:\n");
    scanf("%f", &num);
    printf("1 + ");

    // using for loop
    for ( i = 2; i <= num-1; i++)
    {
        printf("1/%f + ", i);
    }
    for ( i = 1; i < num; i++)
    {
        sum = sum + i;
        printf("1/%f", num);
        printf("\nSum = 1/%f",sum+1/num);   
    }
    */
     int num, i;
     float sum = 0;

     // taking input from user
     printf("enter the number:\n");
     scanf("%d", &num);

     for ( i = 1; i <= num; i++)
     {
        sum = sum+(float)1/(float)i;
     }
        printf("sum of series is %f", sum);

      return 0;

}