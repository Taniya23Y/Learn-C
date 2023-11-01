// Assignment questions
/* write a program to convert decimal number to binary number.*/
/************************************************
 * statement = convert decimal number to binary number.
 * programmer name = taniya yadav
**************************************************/

#include <stdio.h>
int main()
{
    int num, bin = 0, rem = 0, place = 1;
    // takinh=g input from user
    printf("Enter a decimal number:\n");
    scanf("%d", &num);

    printf("The binary equivalent if %d is: ", num);

    // while loop
    while (num)
    {
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    printf("%d\n", bin);
}