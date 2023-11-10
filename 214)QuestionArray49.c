/*How will you initialize a three-dimensional array 
threed[3][2][3]? How will you refer the first and last element 
in this array?*/
/*************************************************
 * statement = threed[3][2][3]
 * programmer name = taniya yadav
**************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int threed[3][2][3] = {
                             {1,2,3},
                             {4,5,6},
                             {7,8,9}
    };
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 2; j++)
       {
        for (int k = 0; k < 3; k++)
        {
           printf("%d", threed[i][j][k]);
        }
        printf("\n");
       }
        
    }
    printf("\nFirst element : %d", threed[1][0][0]);
	printf("\nLast element : %d", threed[1][0][2]);
    return 0;
}
