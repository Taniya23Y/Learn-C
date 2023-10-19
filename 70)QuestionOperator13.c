// write a program to solve following operation and print final values of a,b and c .
/*************************************** 
 c = a++ + ++b
 c = ++b - --b - --a + a++
 c = ++a * --b - a++ / --a
  
 programmer name = taniya yadav
****************************************/


#include <stdio.h>

int main()
{
    /* code */
    int a,b,c;
    a = 12;
    b = 34;

    c = ++b - --a + a++;
    return c;
}
