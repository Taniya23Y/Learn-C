// functions in c
/*write a program to calulate factorial using function with return type arugument*/
/****************************************************************************
 * statement = calulate factorial using function with return type arugument.
 * programmer name = taniya yadav
*****************************************************************************/

#include <stdio.h>
int fact(int); // function declaration

int main()
{
    int num;
    // taking input from user
    printf("enter the number:\n");
    scanf("%d", &num);
    fact(num); // function calling
    printf("The factorial of given number is %d.", fact(num));
    return 0;
}

int fact(int num) // function defining
{
   int i, f = 1;
   // for loop
   for ( i = 1; i <= num; i++)
   {
       f = f * i;
   }
   return f;
}