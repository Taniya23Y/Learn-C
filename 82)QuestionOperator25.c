/*In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number 
of illiterate men and women if the population of the town is 
80,000.*/

/***************************************************************
 statement =  find the total number of illiterate men and women if the 
              population of the town is 80,000. 
 programmer name = taniya yadav
*****************************************************************/

#include <stdio.h>

int main()
{
  float t, tm, tw, lm, lw, illm, illw;

  /* t = town
    tm = total men
    tw = total women
    lm = litterate men
    lw = litterte women
    illm = illiterate men
    illw = illiterate women */

    /* calcualtion */
    t = 80000;
    tm = 80000*52/100;
    tw = t-tm;
    lm = 80000*35/100;
    lw = tw-lm;
    illm = tm-lm;
    illw = tw-lw;

    printf("population of town:%.2f\n", t);   
    printf("tota men:%.2f\n", tm);   
    printf("total women:%.2f\n", tw);   
    printf("litterate men:%.2f\n", lm);
    printf("litterate women:%.2f\n", lw);   
    printf("illiterate men:%.2f\n", illm);
    printf("illiterate women:%.2f\n", illw);   

    return 0;
}