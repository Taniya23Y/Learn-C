/*write a program that accepts a character from user and print its ASCII value*/

/*********************************************************************
 statement = print ASCII value
 programmer name = taniya yadav
**********************************************************************/

#include <stdio.h>

int main()
{
  char b;

  // take input from user

  printf("enter a character:");
  scanf("%c\n", &b);

   // calculation

   // %d display the integer value of character
   // %c display the actual value of character
   printf(" print ASCII value of %c:%d\n",b,b); 
   return 0;
}