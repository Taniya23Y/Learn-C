// array in c
/*Bounds Checking ---

In C there is no check to see if the subscript used for an array 
exceeds the size of the array. Data entered with a subscript 
exceeding the array size will simply be placed in memory outside 
the array; probably on top of other data, or on the program itself. 
This will lead to unpredictable results, to say the least, and there 
will be no error message to warn you that you are going beyond
the array size. In some cases the computer may just hang. Thus, 
the following program may turn out to be suicidal.
*/


#include <stdio.h>
int main()
{
   //  int num[40], i; 
   //  for ( i = 0; i <= 100; i++)       // bounds checking program
   //  {
   //      num[i] = i;
   //  }


    int i;
    int arr[5] = {10,20,30,40,50}; // decalare and initilizing array in c
    // to initilize all array elements to 0, use int arr[5] = {0};
    /*Above array can be initialized as below also
       arr[0]= 10 
       arr[1]= 20 
       arr[3]= 30 
       arr[4]= 40 
       arr[5]= 50
       */ 

      for ( i = 0; i < 5; i++)
      {
         // Acessing each variable
         printf("Value of arr[%d] is %d\n", i, arr[i]);
      }
      
    return 0;
}