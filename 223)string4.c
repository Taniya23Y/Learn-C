/*strlen = This is a function counts the number of character present in the string.In c 
program, strlen() function calculates the length of string. It is defined in the :string.h"
header file . It takes only one argument i.e. string name.*/

/***************************************************************
 * statement = strlen()
 * programmer name = taniya yadav
*****************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{ 
    /*char arr[] = "Bamboozled";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");

    printf("\n string = %s length = %d", arr, len1);   
    printf("\n string = %s length = %d", "Humpty Dumpty", len2);  */


    char a[20] = "Program";
    char b[20] = {'P','r','o','g','r','a','m','\0'};
    char c[20];

    printf("Enter the string: ");
    gets(c);   // gets counts the whitespaces also but scanf() function not count whitespace in program while entering input so thats why i am using gets function instead of scanf() function.

    printf("Length of string a = %d \n", strlen(a));
    // calculate the length of string before null character
    printf("Length of string b = %d \n", strlen(b));
    printf("Length of string c = %d \n", strlen(c));

    return 0;
}