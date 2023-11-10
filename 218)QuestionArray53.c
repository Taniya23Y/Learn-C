/*write a program to display transprose of matrix.*/
/*******************************************
 * statement = to display transprose of matrix
 * programmer name = taniya yadav
***************************************************/
#include <stdio.h>
int main(){
    int arr1[6][6], transpose[6][6], row, col;
    // taking input from user
    printf("Enter the row AND COLUMN: \n");
    scanf("%d %d", &row,&col);

    // assiging the matrix
    printf("Enter teh matrix element: \n");
    for (int i = 0; i < row; ++i)
       for (int j = 0; j < col; ++j)
        {
            printf("Enter the element a%d%d = ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }  

   // printing the values of matrix
    printf("Entered matrix are: \n");
    for (int i = 0; i < row; ++i)
       for (int j = 0; j < col; ++j)
       {
          printf("%d ", arr1[i][j]);
          if (j == col - 1)
          {
            printf("\n");
          } 
       }
    
    // computing transpose fo matrix
    for (int i = 0; i < row; ++i)
       for (int j = 0; j < col; ++j)
        {
            transpose[j][i] = arr1[i][j];
        }

    // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < col; ++i)
  for (int j = 0; j < row; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == row - 1)
    printf("\n");
  }
    return 0;
}
