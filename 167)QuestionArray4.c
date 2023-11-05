// Array in c
/* write a program to store 10 numbers in array and calculate to store 10 numbers in 
array and calculate its sum and average*/
/******************************************************************
 * statement = store 10 numbers in array and calculate to store 10 numbers in 
               array and calculate its sum and average
 * programmer name = taniya yadav
 *********************************************************************/

#include <stdio.h>
int main()
{
    int n, i, sum = 0 , avg;
    int arr[10]; // declare array 
    printf("\n Enter no. of element : ");
    scanf("%d", &n);

    // for loop
    for ( i = 0; i < 10; i++)
    {
        printf("Enter no. of element %d:", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        avg = sum / 10;
    }
    printf("Number stored in array:\n");
    
    for ( i = 0; i < 10; i++)
    {
      printf("a[%d] = %d\n", i, arr[i]);
      
    }
    printf("sum of array = %d\n", sum);
    printf("Average of array = %d\n", avg);
    return 0;
}