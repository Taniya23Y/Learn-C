// Assignment question
/* Write a program to accepts n number from user and show how many numbers are even 
or odd.*/
/***********************************************************
 * statement = even or odd (using break and goto.and using exit function also)
 * programmer name = taniya yadav
************************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*int num;
    // taking input from user
    printf("enter a number to check even or odd:\n");
    scanf("%d", &num);

    // switch statement
    switch (num % 2)
    {
      case 0:
        printf("number is even");
        break;

       case 1:
          printf("number is odd");
        break;  
    
       default:
         break;
    }
    */

   int a;
  printf("\nEnter a Positive int:");
  scanf("%d", &a);

  if (a % 2 == 0) //logic of even no
  {
    goto Even; //goto statement 1
  }
  else
  {
    goto Odd; //goto statement 2
  }

  Even: // label 1
    printf("Number is Even\n");
  exit(0);

  Odd: //label2
    printf("Number is Odd\n");
    return 0;
}
