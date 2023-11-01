// nested for loop
/************************************************************
 * statement = nested for loop prime number
 * programmer name = taniya yadav
**************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*int n;
    printf("Enter the n:");
    scanf("%d", &n);
    // for loop and inside another for loop in previous for loop
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\v",(i*j));
        }
    }    
    printf("\n"); */

    /*int i, j;
    for (i = 2; i < 100; i++)
    {
       for ( j = 2; j <= (i/j); j++)
       
        if(!(i%j))
        break; // if factor found, not prime.
        if (j>(i/j))
        printf("%d is prime\n", i);   
    }*/
    
    /*int num1, num2;
    for ( num2 = 0; num2 <= 3; num2++)
    {
        for ( num1 = 0; num1 <= 2; num1++)
        {
            printf("%d\t%d\t", num2, num1);
            printf("\n");
        }
        
    }*/

    int r, c, sum; 
    for (r = 1; r <= 3; r++) /* outer loop */ 
    { 
       for (c = 1; c <= 2; c++) /* inner loop */ 
       { 
          sum = r + c; 
          printf("r = %d, c = %d, sum = %d\n", r, c, sum); 
        } 
    } 
    return 0;
}
