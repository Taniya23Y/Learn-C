/* write a program to calculate smallest number out of given three numbers.*/
/*****************************************************
 * statement = smallest number out of given three numbers.
 * programmer name = taniya yadav
*******************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    // taking input from user
    printf("enter a three number:");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ( num1 < num2 && num1 < num3 )
    {
        /* code */
        printf("%d is the smallest number.", num1);
    }
    else if ( num2 < num3 )
    {
        printf("%d is the smallest number.", num2);
    }
    else
    {
        printf("%d is smallest number.", num3);
    }

    return 0;
}
