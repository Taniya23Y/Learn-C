/* write a program ------ A Cashier has some amount of money (e.g.RS.4526), write a 
 program to a calculate out how many currencies of Rs 1000,Rs. 500, Rs. 100 , Rs. 50
 Rs. 20 , Rs. 10 , Rs.5, Rs.2 and Rs. 1 required ? */

 /*****************************************************
   Statement = amount of money
   Programmer name = taniya yadav
******************************************************/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int rs=0, one=0, two=0, five=0, ten=0, twenty=0, fifty=0, hundred=0, fivehundred=0, thousand=0;
    
    //  input total number  of amount in rupees from user
    printf("enter the sum of rupees:");
    scanf("%d",&rs);

    // main functionality
    if (rs>=1000)
    {
       thousand = rs/1000;
       rs = rs%1000;    
    }

    if (rs>=500)
    {
       fivehundred = rs/500;
       rs = rs%500;
    }
   
    if (rs>=100)
    {
       hundred = rs/100;
       rs = rs%100;
    }
     
    if (rs>=50)
    {
       fifty = rs/50;
       rs =rs%50;
    }
    
    if (rs>=20)
    {
       twenty = rs/20;
       rs = rs%20;
    }
    
    if (rs>=10)
    {
       ten = rs/10;
       rs = rs%10;
    }
    
    if (rs>=5)
    {
       five = rs/5;
       rs = rs%5;
    }

    if (rs>=2)
    {
       two = rs/2;
       rs =rs%2;
    }
    
    if (rs>=1)
    {
       /* one = rs/1*/
       one = rs;
       /* rs =rs/1*/
    }

    // display notes quality

    printf(" Rs 1000 =%d\n Rs 500 =%d\n Rs 100 =%d\n Rs 50 =%d\n Rs 20 =%d\n Rs 10 =%d\n Rs 5 =%d\n Rs 2 =%d\n Rs 1 =%d\n",1000,500,100,50,20,10,5,2,1);
    return 0;
}
