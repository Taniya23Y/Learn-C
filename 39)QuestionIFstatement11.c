/*The marks obtained by a student in 5 different 
subjects are input through the keyboard. The student gets a 
division as per the following rules: 
1)--Percentage above or equal to 60 - First division 
2)--Percentage between 50 and 59 - Second division 
3)--Percentage between 40 and 49 - Third division 
4)--Percentage less than 40 - Fail 
Write a program to calculate the division obtained by the student. */

/************************************************************
 * statement = logical operator using if else
 * programmer name = taniya yadav
*****************************************************************/

#include <stdio.h>
int main()
{
   int m1, m2, m3, m4, m5, per;
   printf("enter the numbers:\n");
   scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    per = (m1+m2+m3+m4+m5) / 5;
    printf("per of five subject:%d\n", per);

   /*if(per>=60)
   {
      printf("first division");
   }
   else
   {
     if(per>=50)
      {
        printf("second division");
      }
      else
      {
        if(per>=40)
        {
            printf("third division");
        } 
         else
         {
            printf("fail");
         }
      }

   } */

   if ( per >= 60 )
   {
      printf ( "First division" ) ; 
   }
   if ( ( per >= 50 ) && ( per < 60 ) ) 
   { 
    printf ( "Second division" ) ; 
   }
   if ( ( per >= 40 ) && ( per < 50 ) ) 
   {
    printf ( "Third division" ) ; 
   }
   if ( per < 40 ) 
   {
    printf ( "Fail" ) ;              
   }
   return 0;
}