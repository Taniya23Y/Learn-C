/*write a program to calculate wheather a character is vowel or consonant*/
/********************************************************
 * statement = character is vowel or consonant.
 * programmer name = taniya yadav
*********************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char c;
    int lowercase_vowel,upercase_vowel;
    // taking input from user
    printf("enter a Alphabet:");
    scanf("%c", &c);

    // lower_case and upper_case condition.
    lowercase_vowel = ((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'));
    upercase_vowel = ((c=='A'||c=='E'||c=='I'||c=='O'||c=='U'));

    if(lowercase_vowel||upercase_vowel)
    {
        printf("%c is a vowel.", c);
    }
    else
    {
        printf("%c is a consonant.", c);
    }
 
    return 0;
}
