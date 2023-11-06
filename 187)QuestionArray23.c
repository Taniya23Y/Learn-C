#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 4, *j, *k; 
    j = &i; 
    j = j + 1; 
    j = j + 9; 
    k = j + 3; 

    printf("\n value of i is : %d", i);
    printf("\n value of j is : %d", j+1);
    printf("\n value of j is : %d", j+9);
    printf("\n value of k is : %d", j+3);
    printf("\n Original address in x = %u", j ) ;
    return 0;
}
