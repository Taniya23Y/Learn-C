// write a program to swap without using third number?
/****************************************************
 statement = without using third number to swap
 programmer name = taniya yadav
***************************************************/

#include <stdio.h> 

int main(int argc, char const *argv[])
{
    /* code */
    int a = 89,b = 67;
    
    printf("before swapping\n:%d\n%d\n",a,b);
    a = a+b;
    b =a-b;
    a =a-b;

    printf("after swapping\n:%d\n%d\n",a,b);

    return 0;
}
