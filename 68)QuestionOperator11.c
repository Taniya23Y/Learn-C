// write a program to calculate temperature conversion from fahrenheit to celsius?
/***********************************************
 statement =  fahrenheit to  celsius 
 programmer name = taniya yadav
************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    float F,c;

    printf("enter the temperature in F: \n");
    scanf("%f\n", &F);

    c=((F*5)/9)-32;

   printf("\n %.2f F = %.2f c",F,c); 
   return 0;
}
