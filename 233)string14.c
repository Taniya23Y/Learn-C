// Question on strings
/*
   write a program to do the following
    #) print "Who is the inventr of c" in console.
    #) Accept an answer from user
    #) If it is "Dennis Ritchie" then print "Good"
    #) If output is something else print "try again"
*/

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    printf("Who is the inventr of c\n");
    char str1[30];
    gets(str1);

     if(strcat(str1,"Dennis Ritchie"))
     printf("Good");
     else
     printf("Try again");
    return 0;
}
