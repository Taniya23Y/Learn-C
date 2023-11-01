// Assignment question
// nested loops

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, c = 1, i;
    printf("Enter the number of rows \n");
    scanf("%d", &num);

    // while and inside for
    while (c <= num)
    {
        for ( i = 1; i <= c; i++)
        
            printf("*");

            printf("\n");
            c++;
    }
    
    return 0;
}
