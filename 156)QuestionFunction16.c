// Assignment Questions (call by reference and pointers)
/*Pass address of integer variable to void function and double value of variable.*/
/*********************************************************************
 * statement = Pass address of integer variable to void function and double value of
               variable
 * programmer name = taniya yadav
*********************************************************************/

#include <stdio.h>
// function prototype ,also called function declaration
void doubleTHEvariable(int *a); 

int main()
{
    int m;
    // taking input from user
    printf("Enter any number: \n");
    scanf("%d", &m);

    // function calling--doubleTHEvariable(int); 
    doubleTHEvariable(&m); 
    return 0;
}

void doubleTHEvariable(int *a) // function definition
{
    int b;
    b = (*a * *a);
    printf("The double of that given number %d", b);
}