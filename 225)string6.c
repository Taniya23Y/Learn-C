// strcpy()

#include <stdio.h>
#include <string.h>

// function declaration
int xstrcpy(char *b, const char *a);

// function definition
int xstrcpy(char *b, const char *a){

    while (*a != '\0')
    {
       *b = *a;
        a++;
        b++;

    }
    *b = '\0';

}
int main(int argc, char const *argv[])
{
    char a[10], b[10];
    printf("Enter the string: ");
    gets(a);
    strcpy(b,a); // cntent of  string is copied to b

    // function call
    int xstrcpy(char *b, const char *a);
    printf("Copied string: ");
    puts(b);
    return 0;
}



// const keyword

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float r, a;
    const float pi = 3.14;

    // taking input from user
    printf("\n Enter the radius of circle: ");
    scanf("%f", &r);

    a = pi * r * r;
    printf("\n Area of cicle is = %f", a);
    return 0;
}
