/* write a program to ditermine whether a number is prime number ir not .A prime 
number is one which is divisible by 1 0r itslef.*/
/************************************************************
 * statement = prime no. or not(break statement)
 * programmer name = taniya yadav
**************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    int num, i, stop = 0;

    // taking input from user
    printf("enter a number: ");
    scanf("%d", &num);

    // 0 and 1 is  not a prime number
    // change stop to 1 for non-prime number
    if (num==0 || num==1)
    {
        stop = 1;
    }
    
    // looping statement
    for (i  = 2; i <= num / 2; ++i)
    {
        if ( num % i == 0)
        {
            stop = 1;
            break;
        } 
    }

    // stop is 0 for prime number
    if (stop == 0)
    {
        printf("%d number is prime number.", num);
    }
    else
    {
        printf("%d number is not a prime number.", num);
    }
    
    /*
   int num, i;
   // taking input from user
   printf("enter a number: ");
   scanf("%d", &num);

   // while statement
   i=2;
   while (i<=num-1)
   {
      if (num%i==0)
      {
        printf("it is not a prime number");
        break;
      }
      i++;
   }
   if (i==num)
   {
       printf("it is prime number");
   }
     */
    return 0;
}