/* write a program to calculate largest number out of given four number*/
/********************************************************
 * statement = largest number out of given four number
 * programmer name = taniya yadav
************************************************************/

#include <stdio.h>
int main()
{
   int num1, num2, num3, num4; 
   // taking input from user
   printf("enter four number:");
   scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

   if ( num1 > num2 && num1 > num3 && num1 > num4 )
   {
    /* code */
    printf("%d is the largest number.", num1);
   }
   else if ( num2 > num3 && num2 > num4 )
   {
    printf("%d is the largest number.", num2);
   }
   else if ( num3 > num4 )
   {
       printf("%d is the largest number.", num3);
   }
   else 
   {
      printf("%d is the largest number.", num4);
   }   

return 0;
}
