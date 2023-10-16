/* write nested if else program .*/
/**************************************************************
 * statement = nested if else
 * programmer name = taniya yadav
*************************************************************/
#include <stdio.h>
int main()
{
   int i;
   printf("enter either 1 or 2:\n");
   scanf("%d", &i);

   if(i==1)
   {
     printf("you are in heaven");
   }
    else
    {
        if(i==2)
        {
            printf("hell was created with you in mind");
        }
        else
        {
        printf("how about mother earth");
        }
    } 
return 0;
}