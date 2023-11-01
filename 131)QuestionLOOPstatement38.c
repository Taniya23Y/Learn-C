// Assignment questions
/* write a program to print table for numbers between 2 t 10.*/
/**********************************************************
 * statement = print table for numbers between 2 t 10.
 * programmer name = taniya yadav
*********************************************************/

#include <stdio.h>
int main()
{
    int i, j;/*Here, we will use i for outer loop counter
                  and j for inner loop counter*/
    int num;

    // for loop outer and inne rloop counter
    for ( i = 1; i <= 10; i++)   /*to print table 1 to 10*/
    {
         /*each number has 10 multiples*/
        num = i;    /*to initialize number with i ( 1 to 10)*/
        for ( j = 1; j <= 10; j++)
        {
           printf("%d\t", (num*j));   /*after printing table of each number*/
        }
        printf("\n");
    }
     return 0;
}