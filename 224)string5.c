// discussed in string4.c but in this file we gonna discussem function for same program in
// xstrlen()   (declaration , definition, call function) 

#include <stdio.h>
#include <string.h>

// function declaration
int xstrlen(char *s);

// function definition
int xstrlen(char *s ){
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
     
     printf("\n");
     return(length);

}

int main()
{ 
    char arr[] = "Bamboozled";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");

    // function call
    int xstrnlen();
    printf("\n string = %s length = %d", arr, len1);   
    printf("\n string = %s length = %d", "Humpty Dumpty", len2);

    return 0;
}

