// write a program to calculate temperature conversion from celsius to fahrenheit?
/***********************************************
 statement = celsius to fahrenheit
************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    float c,F;

    printf("enter the temperature in c: ");
    scanf("%f\n", &c);

    F=((c*9)/5)+32;

   printf("\n %.2f c = %.2f F",c,F); 
   return 0;
}
