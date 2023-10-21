/* Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the  contents of C and D */

/**************************************************************************
 statement = interchange c and d place
 programmer name = taniya yadav
*************************************************************************/

#include <stdio.h>

int main()
{
  int c, d;

  printf("enter c,d:\n");/*before swapping or interchange */
  scanf("%d %d:%d\n", &c, &d);
  
  /* formula */

  c = c+d;
  d = c-d;
  c = c-d;

 /* after swapping or interchanging */

 printf("after swapping\n a,b: %d %d",c,d);

 return 0;
}