// nested do while loop
/**********************************************************
 * statement = nested do while loop [factorial value]
 * programmer name = taniya yadav
*********************************************************/

#include <stdio.h>
int main()
{
    int num, fact = 1, temp;
    char choice;
    do
    {
        printf("Enter number:\n");
        scanf("%d", &num);
        temp = num;

        do
        {
            fact = fact * num;
            num--;
        } while (num >= 1);
        printf("Factorial value of %d is %d", temp, fact);
        printf("\nCalculate another value y/n:");
        scanf("%ch", &choice);
        
    }while (choice=='y');
    
    return 0;
}