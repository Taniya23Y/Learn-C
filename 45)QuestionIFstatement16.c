/* write a program to calculate wheather character is in lowercase or in uppercase. */
/*****************************************************
 * statement = lowercase and upercase
 * programmer name = taniya yadav
*****************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;

    // taking input from user.
    printf(" enter a alphabet:");
    scanf("%c", &ch);

    // checking wheather character is lowercase or upercase.
    if(ch>='a' && ch<='z')
    {
        printf("%c is lowercase.", ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("%c is a uppercase.", ch);
    } 
    else
    {
        printf("%c is not a character.", ch);
    }  
  
 return 0;
}
