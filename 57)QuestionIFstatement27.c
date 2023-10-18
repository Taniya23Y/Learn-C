/* write a program to check whether a number is even or odd using switch-case. */
/******************************************************
 * statement = even or odd
 * programmer name = taniya yadav
********************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
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

return 0;
}
