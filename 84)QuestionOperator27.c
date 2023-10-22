/* If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item ? */

/**********************************************************************
 statement =  cost price
 programmer name = taniya yadav 
************************************************************************/
/* formula */

/* selling price = cost proice + profit
   cost price = selling price - profit */

#include <stdio.h>

int main()
{
   
   float s, p, c;  //s= selling price, p= profit, c= cost price

    printf("Enter the selling price of 15 items: ");
    scanf("%f", &s);
    printf("Enter the profit on 15 items: ");
    scanf("%f", &p);

    //code to calculate cost of an item 'cost price = (selling price - profit)/15'
    c = (s-p)/15;

    printf("\nThe cost price of an item is %.2f.", c);
    return (0);
}