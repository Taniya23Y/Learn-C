/*In a company an employee is paid as under:If his basic salary is less than Rs1500, 
then HRA = 10% of basic salary and DA = 90% of basic salary.If his salary is either 
equal to or above Rs.1500, then HRA = Rs. 500 and DA = 98% of basic salary.If the 
employee's salary is input through the keyboard write a program to find his gross salary*/

/************************************************************
 * statement = if else (find gross salary)
 * programmer name = taniya yadav
******************************************************************/


#include <stdio.h>
int main()

{
   float bs, hra, da, gs;

   // taking input from user
   printf("ENTER employee's basic salary:\n"); 
   scanf("%f", &bs);

   if (bs < 1500)
   {
      hra = (bs*10/100);
      da = (bs*90/100);
   }
    else
    {
      hra = 500;
      da = (bs*98/100);  
    }
      /* formula for gross salary */
      // gross salary = basic salary + house rent allowance + dearness allowance

      gs = (bs + hra + da);  /* gross salary = sum of basic salary & all allowances*/  
      printf("gross salary %f", gs);

    return 0;
}