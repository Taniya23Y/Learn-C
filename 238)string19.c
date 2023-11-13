// Reading string from the user

// Reading a word of text
/* 
char c[20];
scanf("%s", c);

Explanation:-  String variable can only take a word. It is beacause when white spaces is
               encountered, the scanf() function termintes.
*/

/*#include <stdio.h>
#include <string.h>

int main(){

    char name[20];
    printf("\n Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);


    return 0;
}*/

// Reading a line of text
/* 
char c[20];
scanf("%s", c);

Explanation:-  C program to read line of the text manually.
*/

/*#include <stdio.h>
#include <string.h>
int main(){

    char name[30], ch;
    int i = 0;

    printf("Enter name: ");
    while (ch != '\n')
    {
       ch = getchar();
       name[i] = ch;
       i++;
    }
    name[i] = '\0'; // inserting null character at end
    printf("Name: %s", name);

    return 0;
}*/

/*explanation:- This process to take string is tedious. there are predefined functions gets()
              and puts() in c language to read and display string respectively.

Example 2:- */

/*#include <stdio.h>
#include <string.h>
int main(){

    char name[30];

    printf("Enter name: ");
    gets(name); // Function to read string from user
    printf("Name: ");
    puts(name); // Function to display string.

    return 0;
}*/

// Declaring string as a pointer
/*A pointer holds the address of a variable. When your appilcation is loaded into ram 
part of the ram holds the variable.*/

/*#include <stdio.h>
#include <string.h>
int main(){
    char *name="Universal Informatics";
    printf("My name is: %s", name);
    return 0;
}*/

// Passing string to the function
/*String can be passed to function in similar manner as array as, string is also an array.*/

/*#include <stdio.h>
#include <string.h>
void display(char ch[]);

int main(){
    char c[50];
    printf("Enter string: ");
    gets(c);
    display(c); // passing string c to function
    return 0;
}
void display(char ch[]){
    printf("String output: ");
    puts(ch);
}
*/

//string as a pointer
#include<stdio.h>
#include<string.h>
void display(char *ch);
int main(){

    char c[50];
    printf("Enter string: ");
    gets(c);
    void display(char *ch);
    display(c);

    return 0;
}
void display(char *ch){
    printf("String output: ");
    puts(ch);
}