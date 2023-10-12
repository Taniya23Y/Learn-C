#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a,b,add,sub,mul,div,mod;
    a = 40;
    b = 20;
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;

    printf("addition of a,b :%d\n",add);
    printf("subtraction of a,b :%d\n",sub);
    printf("multiplication of a,b :%d\n",mul);
    printf("division of a,b :%d\n",div);
    printf("modulus of a,b :%d\n",mod);
    return 0;
}
