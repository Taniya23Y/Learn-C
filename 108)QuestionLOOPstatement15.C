// contiue statement
/*
Note that when the value of i equals that of j, the continue 
statement takes the control to the for loop (inner) bypassing rest of 
the statements pending execution in the for loop (inner). 
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    // for loop is used
    for ( i = 1; i <= 2; i++)
    {
        for ( j = 1; j <= 2; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
               printf("\n %d %d",i,j);
            }
        }
        
    }   
    return 0;
}
