// Question on strings
// write a program which shows the output like this :-1) Input -> Universal Informatics  output -> U.Informatics 2) Input -> Ranchod Das Chachad  output -> R.D. chachad?

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);

    // get the first character of each word in the input string
    char initials[10] = " ";
    int i = 0, j = 0;
    while (input[i] != '\0') {
        if (i == 0 || input[i-1] == ' ') {
            if (input[i+1] != '.' && input[i+1] != '\n') {
                initials[j] = toupper(input[i]);
                initials[++j] = '.';
            }
        }
        i++;
    }

    // remove the last dot from initials
    initials[--j] = '\0';

    // get the last name from the input string
    char *last_name = strrchr(input, ' ');
    if (last_name != NULL) {
        last_name++; // skip the space
        *last_name = toupper(*last_name); // capitalize the first letter
    }

    // print the output
    printf("Output: %s. %s\n", initials, last_name);

    return 0;
}




