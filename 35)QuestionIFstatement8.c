/*write a program that accepts a three digit number number from user and check wheather
 it is Armstrong or not.*/
/*****************************************************************
 * statement = checking armstrong or not
 * progammer name = taniya yadav
******************************************************************/

#include "stdio.h"
int main()
{
   int num, originalNum, remainder, result=0;
   printf("ENTER a three digit number:\n");
   scanf("%d", &num);

     originalNum=num;

    while(originalNum!=0)
    {
      // remainder contain the last digit
      remainder = originalNum % 10;
      result += remainder*remainder*remainder;

      // moving the last digit to the original digit
      originalNum /= 10;

    }
    // taking condition on if statement
   if(result == num)
   {
       printf(" %d three digit number is a Armstrong number.", num);
   }
   else
   {
    printf("%d three digit number is not a Armstrong number.", num);
   }

return 0;
}