// write a program of simple interest 
/********************************************
  statement = simple interest
  programmer name = taniya yadav
  date of program = 7/aug/2022
 *****************************************/

#include <stdio.h>
#include<conio.h>

int main()
{
  int amount, rate, time, si;

  printf("enter the amount \n");
  scanf("%d",&amount);

  printf("enter the rate \n");
  scanf("%d",&rate);

  printf("enter the time \n");
  scanf("%d",&time);

  si = (amount * rate * time) / 100;
  printf("simple interest %d, %d, %d, =%d\n",amount,rate,time,si);
  return 0;

}




