// write a program to swap uisng third number?
/********************************************
 statement = swap using third number
 progammer name = taniya yadav
********************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a,b,temp;

    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);

    printf("before swapping\n a =%d\n b=%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    
    printf("after swapping\n a =%d\n b=%d\n",a,b);
    return 0;
}
