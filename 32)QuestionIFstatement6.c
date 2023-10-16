/* write a program to calculate first no. is divisible by second number or not. */
/******************************************************
 * statement = first no. is divisible by second number or not .
 * programmer name = taniya yadav
***************************************************/

#include <stdio.h>

int main()
{
   int num1, num2;
   printf("enter the number:\n");
   scanf("%d %d", &num1, &num2);

   if (num1 / num2)
   {

       printf("first number1 is divisible by  second number2");

   }

   else
   {
     printf("this number1 is not divisible by number2");

   }
return 0;
}