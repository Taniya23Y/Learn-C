// function in c-------> recursion function in c
/*write a program to calculate factorial of any number by recursion and by no 
recursion*/
/*********************************************************************
 * statement = calculate factorial of any number by recursion and by no 
               recursion
 * programmer name = taniya yadav
***********************************************************************/

#include <stdio.h>
/*int main()
{
    int a, fact;
    // taking input from user
    printf("\n Enter any number: ");
    scanf("%d", &a);

    fact = factorial(a); // function calling        without recursion
    printf("\n Factorial value = %d", fact);
}

factorial(int x)
{
    int f = 1, i;
    for ( i = x; i >= 1; i--)
    
        f = f * i;
    return (f);
    
}*/

int main()
{
    int a, fact;
    // taking input from user
    printf("\n Enter any number: ");
    scanf("%d", &a);

    fact = rec(a);
    printf("\n Factorial value =%d", fact);

}

rec(int x)
{
    int f;
    if( x == 1)                    // by recursion
      return 1;
    
    else
     f = x * rec(x-1);
     return (f);
}