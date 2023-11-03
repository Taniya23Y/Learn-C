// functions in c
/*calculate a^b using function with a and b as argument and return result?*/
/******************************************************************************
 * statement = a^b using function with a and b as argument and return result. 
 * programmer name = taniya yadav
*******************************************************************************/

#include <stdio.h>
#include <math.h>
int power(int, int);
int main()
{
    int a, b, result;
    printf("Enter the two numner:\n");
    scanf("%d %d", &a, &b);

    result = power(a, b);
    printf("Result is : %d\n", result);
}

int power(int a, int b)
{
   int x;
   x = power(a, b);
   return (x); 
}