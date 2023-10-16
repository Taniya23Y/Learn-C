/*write a program to calculate Area and Perimeter of rectangle then calculate which 
 one(out of area and perimeter ) is greater.*/
/*************************************************************
 * statement = calculate area and perimeter
 * programmer name = taniya yadav
*************************************************************/

#include <stdio.h>
int main()
{
   float length, breadth, area, perimeter;

   printf("ENTER length and breadth:\n");
   scanf("%f %f", &length, &breadth);

   // area of rectangle = length*breadth
   // perimeter of rectangle = 2*(length+breadth)
    
    area = (length*breadth);
    perimeter =  2*(length+breadth);

    printf("\n %f is the area of rectangle.", area);
    printf("\n %f is the perimeter of rectangle.", perimeter);
    
    // checking which one is greater
    if ( area > perimeter)
    {
        /* code */
        printf("\n %0.2f area is greater.", area);
    }
     else
    {
       printf("\n %0.2f perimeter is greater.", perimeter);
    }

return 0;
}  