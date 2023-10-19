// write a program  to swap using third number?
/*********************************************
 statement = swap using third number
 programmer name = taniya yadav
*********************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a=34,b=56,c;
    
    printf("before swapping\n a,b: %d %d\n",a,b);
    c =a;
    a =b;
    b =c;
    
    printf("after swapping\n a,b: %d %d\n",a,b);
    return 0;
}
