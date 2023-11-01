// Assignment question
/*write a program to fing HCF of two number.*/
/*The full form of HCF in Maths is the Highest Common Factor. HCF of two or more 
numbers is the greatest factor that divides the numbers.*/
/*******************************************************
 * statemnet = HCF of two numbers (while [break] and for)
 * programmer name = taniya yadav
****************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, hcf, remainder, numerator, denominator;
    // taking input from user
    printf("Enter the number:\n");
    scanf("%d %d", &num1, &num2);

    //conditions check
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num2;
    }

    remainder = numerator % denominator;
    // while loop
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    hcf = denominator;
    printf("the hcf of %d and %d is %d.", num1, num2, hcf);   
    return 0;
}
