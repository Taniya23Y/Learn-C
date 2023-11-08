// Calculate the addition of two matrices

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col, i, j, first[6][6], second[6][6],sum[6][6];

    // taking input from user for first matrix
    printf("Enter the number of rows and column of matrix:\n");
    scanf("%d %d", &row, &col);
    printf("Enter the elements of first matrix\n");

    // for loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &first[i][j]);
        }
        
    }

    // taking input from user for ssecond matrix
    printf("Enter the number of rows and column of matrix:\n");
    scanf("%d %d", &row, &col);
    printf("Enter the elements of second matrix\n");

    // for loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &second[i][j]);
        }
        
    }
    

    // calculation of addition of two matrix

    //for loop
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
        }
        
    }
    
    printf("sum of two matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
