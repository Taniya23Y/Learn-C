// function in c
/*wriete a program to calculate HCF and LCM using functionvwithout argument and 
without return value.*/
/*********************************************************
 *statement = calculate HCF and LCM using functionvwithout argument and without return
              value
 *programmer name = taniya yadav
**************************************************************/

#include <stdio.h>
// function prototype decalaration
int calLCM(int, int); // without argumnet 
int calLHCF(int,int); // without argumnet 

int main()
{
    int num1, num2, hcf, LCM;
    // taking input from user
    printf("Enter any number: \n");
    scanf("%d %d", &num1, &num2);

    calLCM(num1, num2); // function calling
    calHCF(num1, num2); // function calling

    printf("\nThe LCM of two number is %d and %d is %d.", num1, num2, LCM);   
    printf("\n1the hcf of %d and %d is %d.", num1, num2, hcf);   
    
    return 0;
    
}

int calLCM(int num1, int num2)   // function definition
{
     int hcf, remainder, numerator, denominator;

    //conditions check
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num2;
    }

    remainder = numerator % denominator;
    // while loop
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    hcf = denominator;
    printf("the hcf of %d and %d is %d.", num1, num2, hcf);   
}

int calHCF(int num1, int num2)
{
    int i, gcd, LCM;
   
   for ( i = 1; i <= num1 && i <= num2; ++i)
   {
      if(num1 % i == 0 && num2 % i == 0)
      gcd = i;
   }
   LCM = (num1*num2)/gcd;
   printf("The LCM of two number is %d and %d is %d.", num1, num2, LCM);
}