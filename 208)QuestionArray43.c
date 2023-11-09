/*Write a program to copy the contents of one array into another 
in the reverse order. */
/************************************************************
 * statement = copy the contents of one array into another 
               in the reverse order
 * programmer name = taniya yadav
****************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr1[5] ={ 1,2,3,4,5};
    int arr2[5], i;

    // taking input of these number as a output in array index
    for (int i = 0; i < 5; i++)
    {
       printf("arr1[%d] = %d\n", i,arr1[i]);
    }
    printf("\n");
    // element copying
    for (int i = 4; i >= 0; i--)
    {
        arr2[i] = arr1[4-i];
    }

    // display the element
    for (int i = 0; i < 5; i++)
    {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    return 0;
}