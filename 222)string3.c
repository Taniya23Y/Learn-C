/*program of gets and puts*/
/*Explanation:----  

gets and puts are the two string functions to take string input from user and display 
string respectively as mentioned in previous chapter

*/
/************************************************************
 * statement = above statement answer (String)
 * programmer name = taniya yadav
**************************************************************/
#include <stdio.h>
// #include <string.h>
int main()
{ 
    char name[30];
    printf("Enter name: ");
    gets(name); /*function to read string from user*/
    printf("Name: ");
    puts(name); //function to display string
    return 0;
}