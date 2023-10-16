/* write a program that accepts a number from user and check whaether it is positive 
 or negavtive or zero. */

/***********************************************************
 * statement = is esle / if statement
 * programmer name = taniya yadav
 ************************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int num;

    //  taking input from user
    printf("Enter the number:\n");
    scanf("%d", &num);

    if (num>0)
    {
      printf("%d is a positive number.",num); 
    }
      else if(num<0)
       {
           printf("%d is a negative number.",num);
       }
        else if(num==0)
          {
            printf(" %d is a zero.",num);
          }
    return 0;
}
