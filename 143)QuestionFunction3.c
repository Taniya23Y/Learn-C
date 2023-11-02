// functions in c
//without argument , with return value
/*************************************************
 * statement = without argument , with return value
 * programmer name = taniya yadav
******************************************************/

#include <stdio.h>
int add(); //function declaration

void main()   // function calling
{
    add();
}

int add()
{
    int num1, num2, sum = 0;
    // taking input from user 
    printf("Enter the numbers:\n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Result is %d", sum);
    return 0;
}