// Assignmment Question
// nestedd loop

#include <stdio.h>
int main()
{
    int rows, space, i, j, coef = 1;
    // taking input from user
    printf("Enter the rows \n");
    scanf("%d", &rows);

    // for loop (outer looping and inner looping)
    for ( i = 0; i < rows; i++)
    {
       for (space = 1; space <= rows-i; space++)
           printf(" ");

           for (j = 0; j <= i; j++)
           {
              if (j == 0 || i == 0)
              coef = 1;

              else
              coef = coef * ( i - j + 1) / j;
              printf("%2d", coef);
            }
        printf("\n");
    
    }
    return 0;
}