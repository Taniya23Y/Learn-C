/* Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees? */

/*****************************************************************
 statement = tempearture conversion
 programmer name = taniya yadav
******************************************************************/

#include <stdio.h>

int main()
 {
    float fr, cent;

  printf("enter the temperature(F):");
  scanf("%f\n", &fr);

  /* temperature com=nversion */
  /*feherenheit = ((9/5*c)+32)*/

   cent = (fr-32)*5/9;
 
  printf("temperature in centigrate=%.2f\n", cent);

  return 0;
}

