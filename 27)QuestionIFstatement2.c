/*The current year and the year in which the 
employee joined the organization are entered through the 
keyboard. If the number of years for which the employee has 
served the organization is greater than 3 then a bonus of Rs. 2500/- 
is given to the employee. If the years of service are not greater 
than 3, then the program should do nothing. */

/***************************************************************
 * statement = give bonus to the employe acc. to their experience.
 * programmer name = taniya yadav
*******************************************************************/

#include<stdio.h>

int main()
{
   int bonus,cy,yoj,yr_of_service;
   // taking input from user
   printf("Enter the current year and year of joining:");
   scanf("%d %d", &cy, &yoj);

   yr_of_service = (cy - yoj);
    
   if (yr_of_service>3)
   {
     bonus = 2500;
     printf("bonus = %d\n",bonus);
   
   }
  return 0;
}