// Assignment question
/*write a program to fing LCM of two number.*/
/*Therefore, the formula to find LCM of two numbers is, LCM of two numbers = product 
of two numbers ÷ HCF of two numbers. Note: The LCM of two co-prime numbers is equal to
the product of co-prime numbers because the highest common factor of prime numbers is
1.*/
/*******************************************************
 * statemnet = LCM of two numbers (while and gcd)
 * programmer name = taniya yadav
****************************************************/

#include <stdio.h>
int main() 
{
	/*int x, y, result;
	printf("Enter two positive integers:\n");
	scanf("%d %d", &x, &y);
	result = (x > y) ? x : y;

	while (1) {
		if (result % x == 0 && result % y == 0) {
			printf("The LCM obtained from %d and %d is %d.", x, y, result);
			break;
		}
		++result;
	}  
    */

   int num1, num2, i, gcd, LCM;
   // taking input from user
   printf("Enter the numbers:\n");
   scanf("%d %d", &num1, &num2);

   for ( i = 1; i <= num1 && i <= num2; ++i)
   {
      if(num1 % i == 0 && num2 % i == 0)
      gcd = i;
   }
   LCM = (num1*num2)/gcd;
   printf("The LCM of two number is %d and %d is %d.", num1, num2, LCM);
    return 0;
}
