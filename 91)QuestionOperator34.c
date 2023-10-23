 // C program to check a given character is a digit or not
// without using library function.

#include <stdio.h>

int isDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;

    return 0;
}

int main()
{
    char ch = 0;

    printf("Enter character: ");
    scanf("%c", &ch);

    if (isDigit(ch))
        printf("Given character is a digit\n");
    else
        printf("Given character is not a digit\n");

    return 0;
}
