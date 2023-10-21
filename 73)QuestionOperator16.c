/*Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary? */
 
 /******************************************************
  statement = gross salary
  programmer name = taniya yadav
*******************************************************/

#include <stdio.h>

int main()
{
   float bp, da, hra, grpay;

   printf("enter basic salary of ramesh: ");
   scanf("%f\n", &bp);

   da = 0.4*bp;
   hra = 0.2*bp;
   grpay = bp+da+hra; /* gross salary = sum of basic salary & all allowances*/

   printf("basic salary of ramesh=%f\n", bp);
   printf("dearness allowance=%f\n", da);
   printf("house rent allowance=%f\n", hra);
   printf("gross salary=%f\n", grpay);
   
   return 0;
}
