/* write a program to check wheather if entered character is vowel or not.*/
/*****************************************************
 * statement = vowel or not by switch
 * programmer name = taniya yadav
*******************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    // taking input from user
    printf("enter choice:\n");
    scanf("%d", &choice);

    // switch statement
    switch (choice)
    {
      case 1:
        printf("a is vowel");
        break;

      case 2:
        printf("e is vowel");
        break;

      case 3:
        printf("i is vowel");
        break;

      case 4:
        printf("o is vowel");
        break;

      case 5:
        printf("u is vowel");
        break;        
    
      default:
         printf("It is not a vowel.");
        break;
    }
    
return 0;
}
