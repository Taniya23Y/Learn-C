// function in c
/*write a program to calculate fibonacci series without argument and with return 
value*/
/*****************************************************************************
 * statement = calculate fibonacci series without argument and with return value
 * programmer name = taniya yadav
***************************************************************************/

#include <stdio.h>
// function prototype declaration
void fibonacciSeries(int range);

int main(int argc, char const *argv[])
{
    int range;
    // taking input from user
    printf("Enter any range: \n");
    scanf("%d", &range);

    printf("Fibonacci series up to %d is-\n ", range);
    fibonacciSeries(range); // function calling     
    return 0;
}

void fibonacciSeries(int range)  // function definition
{
    int a=0, b=1, c;
    while (a<=range)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
    
}
