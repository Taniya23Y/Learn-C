/* write a program of if statement ...while purchasing certain items , a discount of 10%
 is offered if the quantity purchased is more than 1000.if the quantity and price per item 
 are iput through keyboard , write a program to calculate the total expenses. */

 /**********************************************************
  * statement = calculate the total expenses
  * programmer name = taniya yadav
*********************************************************/

#include <stdio.h>

int main()
{
    int qty,dis=0;
    float rate,tot;

    // taking input from user
    printf("Enter quatity,rate\n");
    scanf("%d %f", &qty, &rate);

    if (qty>1000) /*(condition)*/
    {
        /* code / execution statement */
        dis = 10;
        tot = (qty*rate)-(qty*rate*dis/100);
        printf("total expenses=%f",tot);
    }
      else
    {
       /*(code)*/
       printf("there is no dis. on expenses\n");
    }  
      return 0;    
}