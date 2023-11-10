/*write a program to input two 3x3 array and perform below opeartions:
   addition and
   multiplication*/
/*******************************************
 * statement = addition and multiplication of 3X3 array
 * programmer name = taniya yadav
***************************************************/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int first[3][3],second[3][3],row,col,i,j,addition[3][3],multiplication[3][3];
    // taking order of 3X3
    printf("Enter the order of first: ");
    scanf("%d %d", &row, &col); 
    printf("Enter the first matrix:\n ");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }
      
    // taking input from user for second matrix
    printf("Enter the number of rows and column of matrix:\n");
    scanf("%d %d", &row, &col);
    printf("Enter the elements of second matrix\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    // calculation of addition of two matrix
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j){
            addition[i][j] = first[i][j] + second[i][j];
        }

    // printing the result
    printf("addition of two matrix is:\n");
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            printf("%d  ", addition[i][j]);
            if (j == col - 1) {
                 printf("\n\n");
            }

    }
    
    // calculation of multiplication of two matrix
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
        {
            multiplication[i][j] = first[i][j] * second[i][j];
        }
        
    printf("multiplication of two matrix is:\n");
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%d\t", multiplication[i][j]);
        if (j == col - 1) {
                 printf("\n\n");
            }
        }
    }
    return 0;
}
