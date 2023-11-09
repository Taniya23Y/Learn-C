/*Implement the following procedure to generate prime 
numbers from 1 to 100 into a program. This procedure is 
called sieve of Eratosthenes.

step 1 Fill an array num[100] with numbers from 1 to 100

step 2 Starting with the second entry in the array, set all its 
multiples to zero.

step 3 Proceed to the next non-zero element and set all its 
multiples to zero. 

step 4 Repeat step 3 till you have set up the multiples of 
all the non-zero elements to zero.

step 5 At the conclusion of step 4, all the non-zero entries 
left in the array would be prime numbers, so print 
out these numbers.

*/
/************************************************************
 * statement = find that number and occurence of that given number
 * programmer name = taniya yadav
****************************************************************/

#include<stdio.h>
int main()
{
    int arr[100];
    int i, j, current;

    // for loop
    for (int i = 0; i < 100; i++)
        arr[i] = i+1;

    for (int i = 1; i < 100; i++)
    {
        if (arr[i]==0)
          continue;
          current = arr[i];

        for (int j = i+1; j < 100; j++)
        {
          if(arr[j]%current == 0)
          arr[j] = 0;
        
        }
    
    }
    printf("\n ");
    for (int i = 0; i < 100; i++)
    {
        if(arr[i]==0)
        continue;
        printf("%d\t", arr[i]);
    }
    printf("\n");
   return 0;
}
