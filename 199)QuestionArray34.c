#include <stdio.h> 
int main(int argc, char const *argv[])
{
    int s[4][2]  = {
                      {1234, 56},
                      {1212, 33},
                      {1434, 80},
                      {1312, 78}
                   };
    int i, j;

    // for loop
    for (i = 0; i <= 3; i++) 
    { 
        printf ("\n");
        for ( j = 0; j < 2; j++)
        {
            printf("Address of %d %d 1-D Array is = %d ",i,j, *(*(s+i)+j));
            // printf("%d ", *(*(s+i)+j));
        }
    }

    return 0;
}