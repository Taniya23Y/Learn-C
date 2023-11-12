// strcmp () = campares two string

#include <stdio.h>
#include <string.h>

// function declaration
int xstrcmp(char *s1, char *s2);

// function definition
int xstrcmp(char *s1, char *s2){
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
    s1++;
    s2++;
}

   if (*s1 == *s2)
   {
        return 0; // strings are identical
   }
   else{
     
       return (*s1 - *s2);
   }
   
}

int main(int argc, char const *argv[])
{
    char string1[] = "Jerry";
    char string2[] = "Ferry";
     
    char *s1, *s2;

    s1 = string1;
    s2 = string2;

    int i,j,k;
    
    i = xstrcmp(string1, "Jerry");
    j = xstrcmp(string1, string2);
    k = xstrcmp(string1, "Jerry Boy");

    // function call
    int xstrcmp(char *s1, char *s2);
    printf("\n %d %d %d", i,j,k);
    return 0;
}  

/*#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str1[30], str2[30];
    printf("Enter First String: ");
    gets(str1);
    printf("Enter Second String: ");
    gets(str2);

    if (strcmp(str1,str2) == 0)
    
       printf("Both strings are identical!!!!!");
    
    else
        printf("Strings are not idenitical!!!!!");
    
    
    return 0;
} */

