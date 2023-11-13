// Question on strings
/*
   write a program that accept two strings and merge that string into the thrid string 
*/

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str1[20], str2 [30];
    printf("Enter the First string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);

    int str3;
    // strcat(str1,str2);
    printf("The merge String is\n str3 = %s", strcat(str1,str2));
    return 0;
}
