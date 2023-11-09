/*Find the smallest number in an array using pointers. */
/********************************************************
 * statement = Find the smallest number in an array using pointers. 
 * programmer name = taniya yadav
*************************************************************/

#include <stdio.h>
#define N 5
int main(int argc, char const *argv[])
{
    int arr[N], i, *small;
    // taking input from user
    printf("Enter %d integer numbers\n", N);  
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    small = &arr[0];
    for (int i = 0; i < N; i++)
    {
       if (*(arr + i) < *small)
       {
          *small = *(arr +i);
       }
       
    }
    printf("The smallest element in array is: %d ", *small);

    return 0;
}
