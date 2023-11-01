// Assignment questions
/* write a program to calculate sum of the first 10 even numbers.*/
/************************************************
 * statement = calculate sum of the first 10 even numbers.
 * programmer name = taniya yadav
**************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, num;
    for ( i = 1; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n", i);
        }
        
    }
    
    return 0;
}
