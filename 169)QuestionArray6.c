// Array in c
/*write a program to reverse elements in array ?(last elemnent go to first and 
vice-versa)*/
/*******************************************************************
 * statement = reverse elements in array ?(last elemnent go to first and 
               vice-versa)
 * programmer name = taniya yadav
*********************************************************************/

#include <stdio.h>
int main()
{    
    int size;

    // taking input
    printf("Enter size of array:  ");
    scanf("%d", &size);
    printf("Enter array element: ");
    int arr[size];

    // input array element
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        printf("Entered Array is: ");
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }    

    // start point at the first element and last point at the last elemet.
    int start = 0, end = size -1;

    // while loop
    while (start < end)
    {
        // swaping each element
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // increment and drecrement will happens
        start++;
        end--;
    }
    printf("\nPrint reverse number: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}