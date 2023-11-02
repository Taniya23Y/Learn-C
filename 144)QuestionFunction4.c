// functions in c
//with argument , without return value
/*************************************************
 * statement = with argument , without return value
 * programmer name = taniya yadav
******************************************************/

#include <stdio.h>
void add(int, int); // function declaration

void main()
{
    int num1, num2;
    // taking input from user
    printf("Enter the numner:\n");
    scanf("%d %d", &num1, &num2);
    add(num1, num2); // function calling
}

void add(int num1, int num2) // function defining
{
    int sum = 0;
    sum = num1 + num2;
    printf("Result is %d.", sum);
}