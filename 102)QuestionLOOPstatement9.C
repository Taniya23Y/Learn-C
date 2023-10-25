/* write a program to calculate sum of series (1/1!+1/2!+1/3!+1/4!+1/5!+.......)*/
/***********************************************
 * Statement = sum of series(1/1!+1/2!+1/3!+1/4!+1/5!..)
 * programmer name = taniya yadav
***************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])

{
    int num, i=1, j=1, factorial = 1;
    float sum =0;
    // taking input fromm user
    printf("enter the number:\n");
    scanf("%d", &num);

    // loop start
     for ( i=1; i<=num; i++)
    {
       factorial = 1;
    
      for ( j=i; j>0; j--)
      { 
         factorial = factorial * j;
      }

         sum = sum + (1.0 / factorial);

    }
    
     printf("sum of series %f\n", sum );
    return 0;
}
