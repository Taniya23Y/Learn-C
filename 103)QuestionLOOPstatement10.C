/* write a program to calculate sum of digit of a number. */
/**************************************************
 * statement = sum of digit of a number.
 * programmer name = taniya yadav.
*******************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, sum=0, m;
    // taking input from user
    printf("enter a number:\n");
    scanf("%d", &num);

    // looping statement
    while (num>0)
    {
        m = num % 10;
        sum = sum + m;
        num =num / 10;
    }
      printf("sum of digit = %d.", sum);   

    return 0;
}

