// Arrays of pointer

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* int *arr[4];
    int i = 31, j = 5, k = 19, l = 71, m;

    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &l;

    for ( m = 0; m < 4; m++)
    {
        printf("%d", *(arr[m]));
        printf("\n");
    }*/
    
    static int a[] = { 0,1,2,3,4};
    int *p[] = {a, a+1, a+2, a+3, a+4};
    
    printf("\n%u %u %d ", p, *p, *(*p));
    return 0;
}
