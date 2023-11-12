// strlwr() = indicates lowercase

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[] = "LOWer Case";
    puts(strlwr(str));
    return 0;
}

// strupr() = indicates uppercase
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[] = "upper case";
    puts(strupr(str));
    return 0;
}

// strrev() = indicates reverse string
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char str[] = "Hello Everyone";
    printf("\nString before strrev(): %s", str);
    printf("\nString after strrev(): %s", strrev(str));
    return 0;
}