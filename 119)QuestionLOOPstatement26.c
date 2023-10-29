//Assignment questions
/*write a program to calulate number entered is a perfect number or not (sum of 
factors of a number is the number like 6)*/
/*********************************************************
 * statement = perfect number
 --->Perfect number is the number; whose sum of factors is equal to 2*number
 * programmer name = taniya yadav
*******************************************************/
/**************************************************
 * Algorithm
   An algorithm is explained below −

   START
   Step 1: declare int variables and initialized result=0.
   Step 2: read number at runtime.
   Step 3: for loop i=1;i<=number;i++
   Condition satisfies
   i. if(number%i==0)
   ii. result=result+i;
   Step 4: checking the sum of factors.
   i. if(result==2*number)
   ii. print perfect number
   iii. else print not perfect number
   STOP
**********************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number, i, result=0;
    // taking input from user
    printf("Enter the number:\n");
    scanf("%d", &number);

    // for loop
    for (i=1; i<=number; i++)
    {
      if(number % i==0)
       {
        result = result+i;
       }
    }
    if (result == 2*number) /*checking the sum of factors.*/
    {
      printf("%d is a perfect number.", number);
    }
    else{
      printf("%d is not a perfect number.", number);
    }
    
    return 0;
}


