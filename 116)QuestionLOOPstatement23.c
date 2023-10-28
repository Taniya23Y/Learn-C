// goto statement
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  goals;
    printf("Enter the number of goals scored against the india: ");
    scanf("%d", &goals);

    // control statement
    if(goals<=5)
    {
        goto sos;
    }
    else
    {
        printf("About time soccer players learnt C\n"); 
        printf("and said goodbye! adieu! to soccer"); 
        exit(0); /* terminates program execution */ 
    }
    sos: 
    printf("To err is human!");

    /*int i, j, k; 
         for(i = 1; i <= 3; i++) 
         { 
            for(j = 1; j <= 3; j++) 
            { 
               for(k = 1; k <= 3; k++) 
               { 
                  if(i == 3 && j == 3 && k == 3) 
                      goto out; 
                  else 
                      printf("%d %d %d\n", i, j, k); 
                } 
            } 
        } 
        out: 
        printf("Out of the loop at last!"); */
       
     return 0;
}
