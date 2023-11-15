// question
//create a functionn to reverse a string passing a string pointer to a function without using library function 

/*#include<stdio.h>
#include<string.h>

// function declaration
int reverse(char *s1[]);

int main() {
 
    char string1[100];
    printf("Enter the string: ");
    gets(string1);

    printf("\n Before Reversing the string: %s", string1);

    // function call
    int reverse( char *s1[]);
    char *s1;
    printf("\n After Reversing the string: %s", string1);

	return 0;
	
}

// function definition
int reverse(char *s1[]) {
   
    int temp;
    int i, length;
    length = strlen(*s1) - 1;
    for (int i = 0; i < strlen(*s1) / 2; i++)
    {
        temp = *s1[i];
        *s1[i] = *s1[length];
        *s1[length--] = temp;
    }
    // printf("\n After Reversing the string: %s", s1);
	
}*/

#include <stdio.h>
#include <string.h>

// function declaration
int reverse(char *str);

int main()
{
    char str[100];
    printf("Enter the String: ");
    gets(str);

    // function call
    reverse(str);

    printf("Reversed string: %s", str);

    return 0;
}

// function definition
int reverse(char *str){
    int len = 0, i = 0;
    char temp;

    // find length of the string
    while (str[i] != '\0'){
        len++;
        i++;
    }
   
   // swap characters from start and end of string
   for (int i = 0; i < len/2; i++)
   {
       temp = str[i];
       str[i] = str[len-i-1];
       str[len-i-1] = temp;
   }
}