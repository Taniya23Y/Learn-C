/* write a program that accept  marks (out of 100)  of five subjects from user
 and calculate the sum then calculate percentage ? display message accordingly to 
 following condition 
1)-- Percentage >= 60 - grade A
2)--Percentage >= 50 - grade B
3)--Percentage >= 40 - grade C
4)--Percentage < 40 - grade D
 */
/**********************************************************
 * statement = grading system (sum/per)
 * PROGRAMMER name = taniya yadav
*************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a1, a2, a3, a4, a5, sum, per;
    // taking input from user
    printf("enter the five subject number:\n");
    scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);

    sum = (a1 + a2 + a3 + a4 + a5);
    per = (sum / 5);

    printf("%d is the sum\n and %d is the percent.\n", sum,per);

    // conditions
    if (per >= 60 )
    {
        printf("you got grade A\n");
    }
    else if(per >= 50)
    {
        printf("you got grade B\n");
    }
    else if (per >= 40)
    {
        printf("you got grade C\n");
    }
    else if (per < 40)
    {
        printf("you got grade D\n");
    }
    
    return 0;
}
