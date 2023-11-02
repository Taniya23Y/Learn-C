// functions in c
//with argument , with return value
/*************************************************
 * statement = with argument , with return value
 * programmer name = taniya yadav
******************************************************/

#include <stdio.h>
int add(int, int); // function declaration

int main()
{
    int num1, num2, sum = 0;
    // taking input from user 
    printf("Enter the numbers:\n");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);   // function calling
    printf("Result is %d", sum);
    return 0;
}

int add(int num1, int num2) // function defining
{
    int sum = 0;
    sum = num1 + num2;
    printf("Result is %d.", sum);
    return sum;
}
