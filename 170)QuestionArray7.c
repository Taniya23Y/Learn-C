// Array in c
/*write a program which accepts two array and merge them using merge sort.*/
/*Merge sort --------> Merge sort is similar to the quick sort algorithm as it uses the
 divide and conquer approach to sort the elements. It is one of the most popular and 
 efficient sorting algorithm. It divides the given list into two equal halves, calls 
 itself for the two halves and then merges the two sorted halves. We have to define 
 the merge() function to perform the merging.The sub-lists are divided again and again 
 into halves until the list cannot be divided further. Then we combine the pair of one 
 element lists into two-element lists, sorting them in the process. The sorted two-
 element pairs is merged into the four-element lists, and so on until we get the sorted
list.

Now, let's see the algorithm of merge sort.
ALGORITHM----->
if beg < end  
set mid = (beg + end)/2  
MERGE_SORT(arr, beg, mid)  
MERGE_SORT(arr, mid + 1, end)  
MERGE (arr, beg, mid, end)  
end of if  
  
END MERGE_SORT 

Algorithm for that question is as follows---->
1. Start the program
2. Input the length of both the arrays. 
3. Input the arrays elements from user. 
4. Copy the elements of the first array to the merged array when initialising it. 
5. Copy the elements of the second array to the merged array while initialising the 
   second array.
6. Sort the merged array now.
7. Display the merged array.
8. The program ends here.
*/
/*****************************************************************
 * statement =accept two array and merge them by using merge sort.
 * programmer name = taniya yadav
*****************************************************************/

#include<stdio.h>
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