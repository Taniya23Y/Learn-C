// Question on string
/*  Accept a string and convert string into uppercase
*/

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str1[90];
    printf("Enter the string: ");
    gets(str1);
    printf("Upper case string is: %s", strupr(str1));
    return 0;
}
