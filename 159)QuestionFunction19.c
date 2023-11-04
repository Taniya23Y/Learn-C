/*********************************************************************
 * statement = give area and perimeter (pointer)
 * programmer name = taniya yadav
***********************************************************************/

#include <stdio.h>
int main()
{
    int radius; 
    float area, perimeter; 

    // taking input from user
    printf("\nEnter radius of a circle: \n"); 
    scanf("%d", &radius); 

    // call by reference
    areaperi(radius, &area, &perimeter); 

    printf("Area = %f", area); 
    printf("\nPerimeter = %f", perimeter); 

    return 0;
} 

areaperi(int r, float *a, float *p)  // function definition
{ 
 *a = 3.14 * r * r; 
 *p = 2 * 3.14 * r; 
} 
