// Arrays in c
/*For understanding the arrays properly, let us consider the 
following program:*/
/**************************************************************
 * statement = understand an array
 * programmer name = taniya yadav
***************************************************************/
/*No doubt, this program will print the value of x as 10. Why so? 
Because when a value 10 is assigned to x, the earlier value of x, 
i.e. 5, is lost. Thus, ordinary variables (the ones which we have 
used so far) are capable of holding only one value at a time (as in
the above example). However, there are situations in which we
would want to store more than one value at a time in a single 
variable. */

#include <stdio.h>
int main()
{
    int x;
    x = 5;
    x = 10;
    // taking input of x
    printf("\n x = %d", x);
    return 0;    
}