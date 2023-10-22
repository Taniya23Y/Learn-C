/* If a five-digit number is input through the keyboard, write a 
program to reverse the number.? */

/****************************************************************
 statement = reverse the number
 programmer name = taniya yadav
*****************************************************************/

#include <stdio.h>

int main()
{

int number=0, n;

   printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0)
    {
        number = number * 10;
        number = n % 10 + number;
        n = n/10;
    }

    printf("%d", number);
    
    return 0;
}