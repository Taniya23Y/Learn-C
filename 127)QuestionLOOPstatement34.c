// Assignment questions
/* write a program to print prime number from 1 to 1000.*/
/************************************************
 * statement =  print prime number from 1 t0 1000
 * programmer name = taniya yadav
**************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for (i = 2; i < 1000; i++)
    {
        for (j = 2; j <= (i/j); j++)
           if (!(i%j))
           break;
           if (j>(i/j))
            printf("%d is a prime\n", i);        
    }
    
    return 0;
}
