// Assignment Questions (call by reference and pointers)
/*Pass three integer variables to function using call by reference mechanism and
 store sum of two into third variable.*/
/*********************************************************************
 * statement = Pass three integer variables to function using call by reference mechanism and
               store sum of two into third variable.
 * programmer name = taniya yadav
*********************************************************************/

#include <stdio.h>
int sumOFtwoVARIABLE(int *a, int *b, int *c); // function declaartion

int main()
{
   int m, n, sum;
   // input fom user
   printf("Enter any two numbers: \n");
   scanf("%d %d", &m, &n);

   // function calling --- call by reference
   sumOFtwoVARIABLE(&m, &n, &sum);
   return 0;
}

int sumOFtwoVARIABLE(int *a, int *b, int *c) // function definition
{
    int add;
    // adding or summing of two numbers in third variable.
    add = *a + *b;
    printf("sum of two numbers into third variable is: %d", add);
}