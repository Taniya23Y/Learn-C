// function in c-------> recursion and stack function in c
/*write a program to calculate sum of any number by recursion and stack.*/
/*********************************************************************
 * statement = calculate sum of any number by recursion and stack.
 * programmer name = taniya yadav
***********************************************************************/

#include <stdio.h>
int main()
{
    int a = 5, b = 2, c;
    c = add(a,b);
    // taking input from user
    printf("\n sum = %d", c);
}

add(int i, int j)
{
    int sum;
    sum = i + j;
    return (sum);
}