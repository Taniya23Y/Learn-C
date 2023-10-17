/* write a program to calculate wheather year is leap year or not */
/*********************************************************
 * statement = leap year or not 
 * programmer name = taniya yadav
 ***********************************************************/
// description
/***********************************************************
 * A leap year is exactly divisible by 4 except for century years (years ending with 00).
   The century year is a leap year only if it is perfectly divisible by 400.
   For example------
   1999 is not a leap year
   2000 is a leap year
   2004 is a leap year 
 */

#include <stdio.h>
int main()
{
   int year;

   // taking input from user
   printf("enter a year:");
   scanf("%d", &year);

   // leap year is divisible by 400.
   if(year%400==0)
   {
     printf(" %d is the leap year.", year);
   }
   // leap year will not be divisible by 100 .so this is not a leap year. 
   else if(year%100==0)
   {
      printf(" %d is not a leap year.", year);
   }
   // leap is divisible by 4.
   else if(year%4==0)
   {
      printf("%d is a leap year.", year);
   }
   else
   {
      printf("% d is not a leap year.", year);
   }

}