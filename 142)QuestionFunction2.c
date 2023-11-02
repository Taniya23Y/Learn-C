// functions in c
//without argument , without return value
/*************************************************
 * statement = without argument , without return value
 * programmer name = taniya yadav
******************************************************/

#include <stdio.h>
/*void put() 
{  //without argument , without return value

    int q, r;
    printf("enter number of q: ");
    scanf("%d", &q);
    r=q+q;
    printf("after adding q, value is : %d", r);
}
int main()
{
put();
// return 0;
}*/

void add(); // function declaration

void main()
{
    add(); // function calling
}
void add() // function defining
{
    int num1, num2, sum = 0;
    // taking input from user
    printf("Enter the no's:\n");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Result is %d.", sum);
}