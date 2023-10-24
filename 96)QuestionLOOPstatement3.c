/* write a program to caclulate factorial of any number */
/***************************************************************
 * statement = factorial
 * programmer name = taniya yadav
*********************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i=1, f=1;
    //taking input from user
    printf("enter the number for factorial:");
    scanf("%d", &num);

    // while loop to calculate factorial
    while (i<=num)
    {
        f = f*i;
        i++;
        printf("the factorial of number  %d.\n", f);
    }
    
        /*printf("the factorial of number  %d.\n", f);*/

    return 0;
}
