/* function ----- A function is a self-contained block of statements that perform a 
coherent task of some kind. Every C program can be thought of as a collection of these
functions. As we noted earlier, using a function is something like hiring a person to
do a specific job for you. Sometimes the interaction with this person is very simple; 
sometimes it’s complex .

EXAMPLE ===>Suppose you have a task that is always performed exactly in same way—say a
bimonthly servicing of your motorbike.When you want it to be done,you go to the service
station and say,“It’s time,do it now”.You don’t need to give instructions,because the 
mechanic knows his job. You don’t need to be told when the job is done.You assume the 
bike would be serviced in the usual way, the mechanic does it and that’s that. 

Let us now look at a simple C function ------
that operates in much same way as the mechanic.Actually,we will be looking at two 
things,a function that calls or activates the function and the function itself. */

/**********************************************************************
 * statement = function
 * programmer name = taniya yadav
************************************************************************/

#include <stdio.h>
// syntax of function is- 
// return_type function_name(data_type parameter list)

int add(int a, int b); // function prototype declaration
int main()
{
    int num1, num2, sum;
    // taking input from user
    printf("Enter two numbers to add: \n");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);  // function call
    printf("sum = %d", sum);
    return 0;
}

int add(int a, int b)  // function declaration
{
    /*start of function definition*/
    int add;
    add = a+b;
    return add;
    /*end of function definition*/
}    