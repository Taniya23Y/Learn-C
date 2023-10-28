/*Write a program to print all the ASCII values and their 
equivalent characters using a while loop. The ASCII values 
vary from 0 to 255.*/
/***************************************************
 * statement = ASCII Value (using while loop)
 * programmer name = taniya yadav
*****************************************************/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char x;
    int i=0;
    //while loop
    while(i<=255)
    {
        printf("%c = %d\n", i, i);
        i++;
    }
    return 0;
}
