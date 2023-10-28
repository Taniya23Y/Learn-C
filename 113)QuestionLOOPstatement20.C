/*Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another. */
/***************************************************
 * statement = power of given number (using loop and pow function)
 * programmer name = taniya yadav
*****************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    
    /*float a, b, c, x;
    // taking input fom user 
    printf("enter a number: ");
    scanf("%f", &a);

    printf("enter b number: ");
    scanf("%f", &b); 

    //logic
    c = 1;
    x = b;
    // while loop
    while (b!=0)
    {
        c = c*a;
        b = b-1;
    }
        printf("%f raised to the power %f: %f",a,x,c);
        */

    /*int a,b,c;
    // taking input from user
    printf("Enter the numer a and b:");
    scanf("%d %d", &a, &b);
    
    c = pow(a,b);
    printf("The value of %d raised to the power of %d is %d",a,b,c);*/
    return 0;
}
