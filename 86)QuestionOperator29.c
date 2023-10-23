/* write a program that accepts marks of five subject from user and calculate the total
marks and then calculate the percentage out of 500. Also print result whether student 
pass or fail ?  */

/***************************************************************************
statement = pass or fail (student)
programmer name = taniya yadav 
****************************************************************************/

#include <stdio.h>

int main()
{
  float s1, s2, s3, s4, s5, total, pr;

  // take input from user

  printf("enter the subject in s1,s2,s3,s4,s5:\n");
  scanf("%f %f %f %f %f:%f\n", &s1, &s2, &s3, &s4, &s5);

  // calculation
   
   total = (s1+s2+s3+s4+s5)/5; 
   pr = total/5;

   printf("total=%f\n",total);
   printf("pr=%f\n",pr);

   if (total>=420)
   {
     printf("students is pass:%f\n",total>=420);
   }
   else  
   {
     printf("fail");
   }

   return 0;
}