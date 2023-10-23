/*If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402? */

/************************************************************************
 statement = adding one to its digit 
 programmer name = taniya yadav
*************************************************************************/

#include <stdio.h>

int main()
{
   int number,c;
   printf("enter a number: ");
   scanf("%d", &number);

   c=number+11111;
   printf("%d adding one to each of its digits.", c);
   
   return 0;
}