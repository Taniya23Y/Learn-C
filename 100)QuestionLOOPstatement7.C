/* write a program to calculate sum of square of n natural number */
/***************************************************************
 * statement = sum of square of n natural number
 * programmer name = taniya yadav
*************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, count = 1, sum = 0;  
  
    printf("Enter the limit\n");  
    scanf("%d", &num);  
  
    while(count <= num)  
    {  
        sum = sum + (count * count);  
        count++;  
    }  
    printf("Sum of squares of numbers from 1 to %d is %d.\n", num, sum);  
  
    return 0;
}
