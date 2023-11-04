// array in c
#include <stdio.h>
int main()
{
   /* nt num[40], i;
    for ( i = 0; i <= 100; i++)
    {
        num[i] = i;
    }*/


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