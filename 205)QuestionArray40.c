/*Twenty-five numbers are entered from the keyboard into an
array. Write a program to find out how many of them are 
positive, how many are negative, how many are even and how 
many odd. */
/************************************************************
 * statement = find that number and occurence of that given number
 * programmer name = taniya yadav
****************************************************************/

#include <stdio.h>
int main()
{
    int arr[25]; // array initialize
    int n, i, odd = 0, even = 0, positive = 0, negative = 0, zero = 0;

    // taking input 
    printf("Enter how many number you want to display in array:\n");
    scanf("%d",&n);
    for (int i = 0; i <= 24; i++)
    {
       printf("arr[%d] = ", i+0);
       scanf("%d",&arr[i]); 
    }
    
    for (int i = 0; i <=24; i++)
    {
        if (arr[i] > 0)
        {
         positive++;
        }
        if (arr[i] < 0)
        {
         negative++;
        }
        if (arr[i] == 0)
        {
         zero++;
        }
        if (arr[i]%2 == 0)
        {
         even++;
        }
        else
        {
            odd++;
        }
    }
    
    printf("\n %d is positive  %d is negative  %d is zero  %d is even  %d is odd", positive, negative,zero,even,odd);
    return 0;
}