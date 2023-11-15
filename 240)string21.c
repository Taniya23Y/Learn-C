// question 
// create a function to copy  the string without using library function.

#include <stdio.h>
#include <string.h>
void stringcpy(char *str1, char *str2); // function declaration

int main(int argc, char const *argv[])
{
    char str1[1000], str2[1000];
    int i;
    printf("Enter the string : ");
    gets(str1);
    stringcpy(str1, str2); // function call

    printf("\nOriginal String: '%s'", str1);
    printf("\nCopied String: '%s'", str2);
    return 0;
}

void stringcpy(char *str1, char *str2){     // function definition
    
    int i;
    for (int i = 0; str1[i] !='\0'; i++)
    {
        str2[i] = str1[i];
    }
       
       str2[i] = '\0';
}