// Question on strings
/*
   Input a string and check if it is palindrome or not ?
   Palindrome = A string is said to be palindrome if it remains the same on reading from
                both ends. It means that when you reverse a given string, it should be the
                same as the original string.
*/

#include <stdio.h>
#include <string.h>

// function declaration
int palindrome(char *string1);

// function definition
int palindrome(char *string1)
{

    int length;
    char *forward, *reverse;

    length = strlen(string1);
    forward = string1;
    reverse = forward + length - 1;
    for (forward = string1; reverse >= forward;)
    {
        if (*reverse == *forward)
        {
            reverse--;
            forward++;
        }
        else
            break;
    }

    if (forward > reverse)
    printf("Enter string is palindrome!");
    // return 1;
    else
    printf("Enter string is not palindrome!");
    // return 0;
}

int main(int argc, char const *argv[])
{
    char string[20];
    printf("Enter the string: ");
    gets(string);

    // function call
    int palindrome(char *string1);
    printf("%d", palindrome(string));
    return 0;
}
