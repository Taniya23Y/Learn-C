/* write a program to accept basic salary from user,if basic salary is between 0 to 
10000 then TA is 10% of basic salary , DA is 5% of bs,. if salary is above 10000 
then ta is 12 % of bs,DA is 6 % of bs.then find gross salary ? */
/***************************************************
 * statemnt = basic salary(gross salary) --- gs= bs+ta+da
 * programmer name = taniya yadav
*************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    float bs, ta, da, gs;
    // taking input from user
    printf("enter the basic salary:");
    scanf("%f", &bs);

    if (0 >= bs <= 10000)
    {
        /* code */
        ta = (bs * 10/100);
        da = (bs * 5/100);
        gs = (bs + ta + da);
        printf(" %f is the gross salary.", gs);
    }
    else 
    {
        (bs >= 10000);
        ta = (bs * 12/100);
        da = (bs * 6/100);
        gs = (bs + ta + da);
        printf("%f is the gross salary.", gs);
    }
    
    return 0;
}
