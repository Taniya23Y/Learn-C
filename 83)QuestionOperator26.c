/* A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer? */

/*************************************************************
 statement = currency question
 programmer name = taniya yadav
***************************************************************/ 

#include <stdio.h>

int main()
{
  int amount;
  int a , b, c;
  // taking input

  printf("enter the amount (in hundreds):");
  scanf("%d\n", &amount);
  
  // calculation 
 
   a = (amount /100);
   b = ((amount %100) /50);
   c = (((amount %100)%50) /10);
 
  printf("required notes of rupees hundred in a:%d\n", a);
  printf("required notes of rupees fifty in b:%d\n", b);
  printf("required notes of rupees ten in c:%d\n", c);

  return 0;
}