// Array in c
/*write a program to find maximum element in array element in array.*/
/*ALGORITHM:
STEP 1: START
STEP 2: INITIALIZE arr[];
STEP 3: length= sizeof(arr)/sizeof(arr[0])
STEP 4: max = arr[0]
STEP 5: SET i=0. REPEAT STEP 6 and STEP 7 i<length
STEP 6: if(arr[i]>max)
              max=arr[i]
STEP 7: i=i+1.
STEP 8: PRINT "Largest element in given array:" assigning max.
STEP 9: RETURN 0
STEP 9: END.
*/
/***************************************************************
 * statement = find maximum element in array element in array
 * programmer name = taniya yadav
*******************************************************************/

#include <stdio.h>
int main()
{
    int num, i;

    int arr[5]; // array declaration

    int max = arr[0]; // initilize maximum with first array element 

    int length = sizeof(arr) / sizeof(arr[0]); // calculate length of array arr.
    // taking number of element
    printf("Enter number of element: ");
    scanf("%d", &num);

    // for lop
    for ( i = 0; i < num; i++)
    {
        printf("Enter number of element%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Number stored in array:\n");
    for ( i = 0; i < num; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

     for (int i = 0; i < num; i++) {     
        //Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("length of array is = %d\n", length);
    printf("Maximum number of array is = %d\n", max);
    return 0;
}