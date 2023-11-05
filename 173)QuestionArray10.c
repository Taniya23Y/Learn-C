// array in c
//selection sort
/*Selection sort is a sorting algorithm that selects the smallest element from an 
unsorted list in each iteration and places that element at the beginning of the 
unsorted list.

Algorithm------>
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort
*/

#include <stdio.h>
int main()
{
    int array[100], n, c, d, position, swap;
    printf("Enter number of element\n");
    scanf("%d", &n);
    
    printf("Enter %d integer\n", n);

    // 1st for loop
    for ( c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    // 2nd for loop
    for ( c = 0; c < (n - 1); c++)
    {
       position = c;

       // 3rd for loop
       for ( d = c + 1; d < n; d++)
       {
           if (array[position] > array[d])
           {
            position = d;
           }
       }
       if (position != c)
       {
        swap = array[c];
        array[c] = array[position];
        array[position] = swap;
       }
    }
    printf("Sorted list in ascending order:\n");
    
    // 4th for loop
    for ( c = 0; c < n; c++)
    {
        printf("%d\n", array[c]);
    }
    
    return 0;
}