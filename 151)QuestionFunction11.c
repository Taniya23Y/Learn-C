// functions in c
/*write a program to display below pattern using function with number of rows in
 pattern as argument
 5  4  3  2  1
 4  3  2  1
 3  2  1           
 2  1
 1*/
 /*
steps to solve pattern question------->
1] count the rows and columns in pattern question
2] number of lines = number of rows = number of times outer loop will run
3] how many columns are thier in each rows.
   identify fir every row no. how many columns are there or types of element in the
   columns

End of steps.
*/
/******************************************************************************
 * statement = pattern using function with number of rows. 
 * programmer name = taniya yadav
********************************************************************************/

#include <stdio.h>
// function prototype declaration
void pattrn(int );

int main()
{
    int n;
    // taking input from user
    printf("Enter any number: \n");
    scanf("%d", &n);
    
    pattern(n); // function calling
}

void pattern(int n)       // function definition
{
    int row, col;
    // for loop(outer and inner loop)
    for (int row = 5; row >= 1; row--)
    {
        for (int col = row; col >= 1; col--)
        {
           printf("%d", col);
        }
        printf("\n");
    }
    
}
    

