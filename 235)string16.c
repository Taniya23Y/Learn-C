// Questions on string
// write a program in which user enters a number like 4250 and output should be in words in c?

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void convertToWords(char *num)
{
    int len = strlen(num);

    if (len == 0) {
        printf("No digits to print");
        return;
    }

    if (len > 9) {
        printf("Number is too large to convert to words");
        return;
    }

    char *single_digit[] = { "zero", "one", "two", "three", "four",
                             "five", "six", "seven", "eight", "nine"};

    char *two_digits[] = {"", "ten", "eleven", "twelve", "thirteen", 
                          "fourteen", "fifteen", "sixteen", "seventeen", 
                          "eighteen", "nineteen"};

    char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty",
                             "sixty", "seventy", "eighty", "ninety"};

    char *tens_power[] = {"hundred", "thousand", "lakhs"};

    printf("%s: ", num);

    if (len == 1) {
        printf("%s", single_digit[*num - '0']);
        return;
    }

    while (*num != '\0') {

        if (len >= 3) {
            if (*num -'0' != 0) {
                printf("%s ", single_digit[*num - '0']);
                printf("%s ", tens_power[len-3]); // here len can be 3 or 4
            }
            --len;
        }

        else {
            if (*num == '1') {
                int sum = *num - '0' + *(num + 1)- '0';
                printf("%s", two_digits[sum]);
                return;
            }

            else if (*num == '2' && *(num + 1) == '0') {
                printf("twenty");
                return;
            }

            else {
                int i = (*num - '0');
                printf("%s ", i? tens_multiple[i]: "");
                ++num;
                if (*num != '0')
                    printf("%s ", single_digit[*num - '0']);
            }
        }
        ++num;
    }
}

int main()
{
    char number[50];

    printf("Enter a number(less than 10000): ");
    scanf("%s", number);

    convertToWords(number);

    return 0;
}
