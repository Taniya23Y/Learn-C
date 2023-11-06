// selection sort
// Array in c

#include <stdio.h>

int swap(int *xp, int *yp)
{
   int temp = *xp;        
   *xp = *yp;
   *yp = temp;

return 0;
}

int selection(int arr[], int n)
{
    int minIndex;
    for (int i = 0; i < n-1; i++)
    {
         minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        
        // Swap the found minimum element with the first element
        swap(&arr[minIndex], &arr[i]);
    }
  return 0;
}

/* Function to print an array */
int printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

 return 0;  
}

int main()
{
    int arr[11] = {29,72,96,13,67,52,-2,5,30,-1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    printf("Sorted array: \n");
    printArray(arr, n);

return 0;
}