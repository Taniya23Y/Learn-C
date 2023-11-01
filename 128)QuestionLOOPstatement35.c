// Assignment questions
/* write a program to print Armstrong number from 100 to 999.*/
/************************************************
 * statement =  print Armstrong number from 100 t0 999.
 * programmer name = taniya yadav
**************************************************/
#include <math.h>
#include <stdio.h>
int main()
{
   int num, i, sum, count = 0;
   printf("All Armstrong number between 100 and 999 are:\n");
  
    // This loop will run for 100 to 999
    for (i = 100; i <= 999; i++) {
        num = i;
        // Count number of digits.
        while (num != 0) {
            num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count)
              + pow((num % 100 - num % 10) / 10, count)
              + pow((num % 999 - num % 100) / 100, count);
        // Check for Armstrong Number
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }
     return 0;
}
