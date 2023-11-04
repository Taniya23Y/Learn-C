//A Simple Program Using Array 
/*Let us try to write a program to find average marks obtained by a 
class of 30 students in a test.*/
/************************************************************************
* statement = average marks using array 
* programmer name = taniya yadav
**************************************************************************/

#include <stdio.h>
int main()
{
    int avg, sum = 0;
    int i;
    int marks[30];   /*Array Declaration*/

    // for loop 
    for ( i = 0; i <= 29; i++)
    {
        printf("Enter marks: \n"); 
        scanf("%d", &marks[i]);
    }

    for ( i = 0; i <= 29; i++)
    {
        sum = sum + marks[i];   /*read data from an array*/
        avg = sum / 30;
        printf("\n Average marks = %d", avg);
    }
    
    return 0;
}