/*If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number? */

/*************************************************************
 statement = The total of the first and the last digit of the entered number
 programmer name = taniya yadav
**************************************************************/

#include <stdio.h>

int main()
{
  int num, first_digit, last_digit, total;
 
  printf("enter the four digit number: ");
  scanf("%d\n", &num);
   
   //calculation 

   last_digit = num % 10;
   total = last_digit;
   first_digit = ( num / 1000) % 10;
   total = total + first_digit;

  /* The total of the first and the last digit of the entered number */
   
  printf("The total of the first and the last digit of the entered number:%d\n",total);

  return 0;
}