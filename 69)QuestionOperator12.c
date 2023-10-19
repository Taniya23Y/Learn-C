// write a program to solve following operation and print final values of a,b and c .
/*************************************** 
 c = a++ + ++b
 c = ++b - --b - --a + a++
 
 programmer name = taniya yadav
****************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a,b,c;
    a = 12;
    b = 34;
 
    c = a++ + ++b;
    printf("%d\n",c);
    return 0;
}
