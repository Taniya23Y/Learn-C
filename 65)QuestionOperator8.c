// wrie a program to convert distance from KM to MM ?
/***************************************************
 statement = convert from KM to MM 
 programmer name = taniya yadav 
 explaination = 1 kilometer = 1000 meter
                1 kilometer = 100000 centimeter
                1 kilometer = 10000000 milimeter
**************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    float kilometer,milimeter;

    printf("please enter the length of kilometer(KM): ");
    scanf("%f", &kilometer);  
 
    milimeter = kilometer * 1000000.0;

    printf("\n %.2f kilometer=%.2f milimeter", kilometer, milimeter);

    return 0;
}
