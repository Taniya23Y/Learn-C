/* write a program to enter three subject marks (out of 100). check if students 
is fail or pass, only if he/she scores greater than 75 in each subject and the avearge
of all three subject marks should be greater than 80. */
/***************************************************************
* statement = pass or fail
* programmer name = taniya yadav
***********************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m1,m2,m3, average;
    // taking input from user
    printf("enter the three subjects:");
    scanf("%d %d %d", &m1, &m2, &m3);

    average = (m1 + m2 + m3 / 3);
    printf("%d is the average of three subject.", average);

    // conditions
    if ( m1>75 && m2>75 && m3>75 )
    {
        printf(" he/she is pass");
    }
    else if(average > 80)
    {
        printf("here he/she is pass");
    }
    else
    {
        printf("he/she is fail");
    }

    return 0;
}
