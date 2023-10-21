/*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters? */

/***************************************************************
 statement = conversion of distance
 programmer name = taniya yadav 
*****************************************************************/

#include <stdio.h>

int main ()
{
  float km, m, cm, ft, inch;

  printf("enter distance in kilometer:");
  scanf("%f\n", &km);

  /* conversion of distance */  
  
  m = km * 1000;
  cm = m * 100; 
  inch = cm / 2.54; 
  ft = inch / 12;

  printf("distnace in kilometer= %f\n", km);
  printf("distnace in meter= %f\n", m);
  printf("distnace in centimeter= %f\n", cm);
  printf("distnace in inch= %f\n", inch);
  printf("distnace in feet= %f\n", ft);

  return 0;
}