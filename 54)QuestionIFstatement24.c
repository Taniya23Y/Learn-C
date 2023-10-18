/* write a program to calcualte area of different shapes based on users choice S,C OR R
 (like s for square ,c for circle, r for rectangle)*/
/********************************************************
 * statement = choices (shapes)
 * programmer name = taniya yadav
*************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    float length, breadth, side, radius, area;
    // input
    printf("area of rectangle\narea of square\narea of circle\n");
    scanf("%d", &choice);

    // switch
    switch (choice)
    {
    case 1:
         printf("enter the length and breadth:");
         scanf("%f %f", &length, &breadth);
         area = (length*breadth);
         printf("%f", area);
         break;

    case 2:
         printf("enter the side:");
         scanf("%f", &side);
         area = (side*side);
         printf("%f", area);
        break;

    case 3:
         printf("enter the radius:");
         scanf("%f", &radius);
         area = (3.14*radius*radius);
         printf("%f", area);
        break;       
    
    default:
          printf("you have a wrong choice");
        break;
    }
return 0;
}
