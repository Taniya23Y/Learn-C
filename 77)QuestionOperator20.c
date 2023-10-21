/*The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle? */

/**********************************************************
 statement = area and periemter of rectangle and circle
 programmer name = taniya yadav 
*******************************************************/

#include <stdio.h>

int main()
{
 float l, b, r, aor, por, aoc, poc;

 printf("enter the length,breadth,radius: \n");
 scanf("%f %f %f:%f\n", &l, &b, &r );

 /* formula of reactangle and circle both(area and perimeter) */
  
 aor= l*b; /* aor = area of reactnagle */
 por = 2*(l+b); /* por = perimeter of rectangle */
 aoc = 3.14*r*r; /* aoc = area pf circle */
 poc = 2*3.14*r; /* poc = perimeter or circumference of circle  */
 
 /* calculation */

  printf("area of rectangle= %f\n",aor);
  printf("perimeter of rectangle= %.2f\n",por);
  printf("area of circle= %f\n",aoc);
  printf("perimeter of circle= %.2f\n",poc);

  return 0;
}