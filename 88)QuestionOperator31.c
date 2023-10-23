/* write a program that accepts a three digit number from user and obtain reverse
 of the number and then calculate  sum of all the digits? */
/****************************************************************
 * statement = reverse and sum 
 * programmer name = taniya yadav
***************************************************************/

#include <stdio.h>

int main()
{
   int num,a,b,c,sum,number=0,n;
   
   // take input from user
   printf("enter the three digit number:");
   scanf("%d\n", &num);

   // calculation
   
   c = num % 10;
   b = (num / 10)%10;
   a = (num /100)%10;

   printf("sum of num:%d\n", c+b+a);

   // calculation of reverse the number

    printf("enter three digit number:");
    scanf("%d\n", &n);
     while (n!=0)
   {
      number = number*10;
      number = n % 10 + number;
      n = n/10;
   }
    printf("reverse the three digit number:%d\n", number);
    return 0;
}