// multiple nested loops
/**********************************************************
 * statement = nested loops
 * programmer name = taniya yadav
*********************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, c=1, k;
    printf("Enter the number of column\n");
    scanf("%d",&n);

    while (c <= n)                     /* while (c <= n)*/
    {                                  //{    
        for ( k = 5; k >= c; k--)      //  for ( k = 1; k <= c; k++)
            printf("*");               // printf("*");
                                        
            printf("\n");              // printf("\n");
            c++;                       // c++;
    }                                  // }
    
    return 0;
}


