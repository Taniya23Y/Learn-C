/*write a program to print sum of diagonal elements of a 3X3 matrix.*/
/******************************************************************
 * statement = to print sum of diagonal elements of a 3X3 matrix
 * programmer name = taniya yadav
**************************************************************/

#include <stdio.h>
    int main ()
    {
 
        static int array[10][10];
        int i, j, row, col, a = 0, sum = 0;
 
        printf("Enetr the order of the matix \n");
        scanf("%d %d", &row, &col);
 
        if (row == col) 
        {
            printf("Enter the co-efficients of the matrix\n");
            for (i = 0; i < row; ++i)
            {
                for (j = 0; j < col; ++j)
                {
                    scanf("%d", &array[i][j]);
                }
            }
 
            printf("The given matrix is \n");
            for (i = 0; i < row; ++i) 
            {
                for (j = 0; j < col; ++j)
                {
                    printf(" %d", array[i][j]);
                    }
                printf("\n");
            }
 
            for (i = 0; i < row; ++i) 
            {
                sum = sum + array[i][i];
                a = a + array[i][row - i - 1];
            }
 
            printf("\nThe sum of the main diagonal elements is = %d\n", sum);
            printf("The sum of the off diagonal elements is   = %d\n", a);
 
        }
      else
            printf("The given order is not square matrix\n");
 return 0;
    }