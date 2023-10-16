/* write a program that accept a three digit number from user and check wheather it is  
 palindrome or not */

 /***********************************************************
  * statement = palindrome or not 
  
    1)--Palindrome number algorithm
    2)--Get the number from user
    3)--Hold the number in temporary variable
    4)--Reverse the number
    5)--Compare the temporary number with reversed number
    6)--If both numbers are same, print palindrome number
    7)--Else print not palindrome number

  * programmer name = taniya yadav
*********************************************************************/

#include <stdio.h>
int main()
{
    int num, reversed=0, remainder, original;
    printf("enter the number:");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
       remainder = num % 10;
       reversed = reversed * 10 + remainder;
       num /= 10;
    }

    if (original == reversed)
    {
       printf("%d is palindrome number.", original);
    }

    else
    {
       printf("%d is not palindrome number.", original);
    }
return 0;
}