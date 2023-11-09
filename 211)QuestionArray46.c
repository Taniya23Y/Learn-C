/*Write a program which performs the following tasks: 
− initialize an integer array of 10 elements in main( )
− pass the entire array to a function modify( )
− in modify( ) multiply each element of array by 3 
− return the control to main( ) and print the new array 
  elements in main( )*/
/***************************************************************
 * statement = question|
 * programmer name - taniya yadav
********************************************************************/

#include <stdio.h>
#define N 10

// function declaration
int modify(int *element);
int main(int argc, char const *argv[])
{
    int arr1[N],i;
    printf("Array element are: %d", N);
    // for loop
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    // function call
    int getModify = modify (arr1);
   
    for (int i = 0; i < N; i++)
		printf("%d ", arr1[i]);
    return 0;
}

// function definition
int modify(int *element){

   for (int i = 0; i < N; i++, element++)
   {
       *element *= 3;
   }

}
