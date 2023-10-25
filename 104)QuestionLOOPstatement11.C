/* write a program to check whether the given number is armstrong or not.*/
/**************************************************
 * statement = armstrong or not
 * programmmer name  = taniya yadav
*******************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, rem, sum = 0, temp;
    // taking input from user
    printf("enter a number:\n");
    scanf("%d", &num);

    //using for loop
    for ( temp = num; num != 0; num = num/10)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
    }
    
    if (sum==temp)
    {
        printf("%d is an Armstrong number.", sum);
    }
    else
    {
        printf("%d is not an Armstrong number.",sum);
    }

    return 0;
}
