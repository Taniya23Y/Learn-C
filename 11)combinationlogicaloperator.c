#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int m=400,n=20;
    printf("value of (m>=78&&n>30)is:%d\n",(m>=78&&n>30));
    printf("value of (m>=78||n<10)is:%d\n",(m>=78||n<10));
    printf("value of !(m>=78)is:%d\n",!(m>=78));

    return 0;
}
