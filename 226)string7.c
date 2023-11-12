// strcat() = joins two strings.

#include <stdio.h>
#include <string.h>

// function declaration
 int xstrcat(char *s, char *t);

// function definition
 int xstrcat(char *s, char *t){
      int i = 0, length = 0;

     while (s[i] != '\0')
     {
        length++;
        s[length+i] = t[i];
     }
      s[length+i] = '\0';
 }

int main(int argc, char const *argv[])
{
    char source[] = "Folks!!!!";
    char target[20] = "hello";

    char *s;
    char *t;
    s = source;
    t = target;
    strcat(target, source);

    // function call
    int xstrcat(char *s, char *t);
    printf("\n Source string = %s", s);
    printf("\n target string = %s", t);

    return 0;
}

