//Assignment questions in c
// Arrays in c
/*write a program to sort array in descending order*/
/****************************************************
 * statement = sort array in descending order
 * programmer name = taniya yadav
****************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int arr[5]; // array initalise
    // taking input from user
    printf("Enter the number that stored in array: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the number to be stored %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("array element: \n");
    for (int i = 0; i < num; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // sorting
    int temp;
    printf("Sorted Array is :\n ");
    for( int i = 0; i < num; i++)
    {
      for(int j = i + 1; j < num; ++j)
      {
         if( arr[i] < arr[j])
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   printf("stored Elements of Array: \n");
   for(int i = 0; i < num; i++)
   {
      printf("arr[%d] = %d\n",i,arr[i]);
   }

    return 0;
}
