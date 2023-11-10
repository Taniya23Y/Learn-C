/*write a program to find second highest no. in array*/
/*******************************************
 * statement = to find second highest no. in array
 * programmer name = taniya yadav
***************************************************/

/*ALGORITHM: 
Algorithm

Step 1 − Declare and read the number of elements.

Step 2 − Declare and read the array size at runtime.

Step 3 − Input the array elements.

Step 4 − Arrange numbers in descending order.

Step 5 − Then, find the second largest and second smallest numbers by using an index.

Step 6 − Print the second largest and the second smallest numbers.
**************************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,i,j,number[30],a,okay,counter;
    // taking input from user
    printf("Enter the number: ");
    scanf("%d", &num);

    // for loop
    for ( i = 0; i <  num; i++)
    {
       scanf("%d", &number[i]);
    }
    
    // for loop
    for ( i = 0; i < num; i++)
    {
        for ( j = i+1; j < num; j++)
        {
           if(number[i] < number[j]){
           a = number[i];
           number[i] = number[j];
           number[j] = a;
           }
        }
        
    }
    
    printf("The number arranged in descending order: ");
    printf("\n");
    
    for ( i = 0; i < num; i++)
    printf ("%d", number[i]);
   printf ("\nThe 2nd largest number is = %d", number[1]);
   printf ("\nThe 2nd smallest number is = %d\n", number[num-2]);
   okay = (number[1] +number[num-2])/2;
   counter = 0;
   for (i = 0; i < num; ++i){
      if (okay == number[i])
         ++counter;
   }
   if (counter==0)
      printf("The average of 2nd largest & 2nd smallest is not in the array");
   else
      printf("The average of 2nd largest & 2nd smallest in array is %d in numbers", counter);
    
       return 0;
}


   