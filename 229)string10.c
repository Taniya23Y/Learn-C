// Questions on strings
/*Accept string and
                    count vowel
                    count consonant
                    count Number
                    count spaces
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

// function declaration
int isVowel(char str);
int isConsonant(char str);
int isNumber(char str);
int isSpace(char str);

// fuunction definition
int isVowel(char str)
{

    if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' ||
        str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isConsonant(char str)
{
    if (((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')) && !isVowel(str))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isNumber(char str)
{
    if (str >= '0' && str <= '9')
    {
        return 1;
    }
    else {
        return 0;
    }
    
}

int isSpace(char str)
{
    if (str == ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main(int argc, char const *argv[])
{
    char str1[800];
    int V = 0, C = 0, N = 0, S = 0, i;

    printf("Enter the string: ");
    gets(str1);

    // function call
    for (i = 0; str1[i] != '\0'; i++)
    {
        V += isVowel(str1[i]);
        C += isConsonant(str1[i]);
        N += isNumber(str1[i]);
        S += isSpace(str1[i]);
    }

    printf("\n Vowel present in string is: %d", V);
    printf("\n Consonant present in string is: %d", C);
    printf("\n Number present in string is: %d", N);
    printf("\n Spaces present in string is: %d", S);
    return 0;
}
