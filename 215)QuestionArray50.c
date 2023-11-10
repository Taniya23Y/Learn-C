/*write a program to merge two arrays in  third array*/
/*******************************************
 * statement = merge two array in third array
 * programmer name = taniy yadav
***************************************************/

#include <stdio.h>
int main()
{
    int num1, num2, Num;
    // taking input from
    printf("Enter the number 1 or size of array: ");
    scanf("%d", &num1);
    printf("Enter the number 2 or size of array: ");
    scanf("%d",&num2); 
    
    Num = num1 + num2;
    printf("Entered array are: ");
    
    // declaring the array
    int arr1[num1], arr2[num2], arr3[Num];

    // loops
    for (int i = 0; i < num1; i++)       // 1 for loop for num1
    {
       scanf("%d", &arr1[i]);
       arr3[i] = arr1[i];
    }
    int k = num1;
    printf("\n Entered element of num2 array is: ");
    for (int i = 0; i < num2; i++)             // 2 for loop for num2
    {
      scanf("%d", &arr2[i]);
      arr3[k]= arr2[i];
      k++;
    }
    printf("\nThe merged array before sorting : \n\t");
    for (int i = 0; i < Num; i++)      // 3 for loop for Num
    {
        // print the merge array before sorting
        printf("%d", arr3[i]);
    

        printf("\nThe merged array after sorting : \n\t");
        for (int j = 0; j < Num ; j++)     // 4 for loop for after sorting
        {
            int temp;
            // swapping
            if (arr3[i] > arr3[j])
            {
               temp = arr3[i];
               arr3[i] = arr3[j];
               arr3[j] = temp;
            }
        }
    } 
    for (int i = 0; i < Num; i++) //Printing the sorted Array 
    {
      printf(" %d ", arr3[i]);
    }
     

return 0;
}