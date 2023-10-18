/* write a program to show day of week according to user input.*/
/**********************************************************************
 * statement = week per choice
 * programmmer name = taniya yadav
**********************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    // taking input from user
    printf("enter choice:\n");
    scanf("%d", &choice);

    // switch statement
    switch (choice)
    {

     case 1:
        printf("sunday");
        break;
   
     case 2:
        printf("monday");
        break;

     case 3:
        printf("tuesday");
        break;

     case 4:
        printf("wednesday");
        break;

     case 5:
        printf("thursday");
        break;

     case 6:
        printf("friday");
        break;

     case 7:
        printf("saturday");
        break;                  
    
    default:
        break;
    }
    return 0;
}
