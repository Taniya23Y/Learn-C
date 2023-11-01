// nested while loop
/************************************************
 * statement = nested while loop
 * programmer name = taniya yadav
**************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int rows; // variable declaration
    int columns; // variable declaration
    int k = 1; // variable initialization 

    // taking input from user
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    printf("Enter the number of columns:");
    scanf("%d", &columns);

    // 2D array decalaration
    int a[rows][columns];
    int i = 1;
    while (i <= rows)   // outer loop
    {
       int j = 1;
       while (j <= columns)  // inner loop
       {
          printf("%d\t", k); // printing the value of k
          k++;
          j++;
       }
       i++;
       printf("\n");
       
    }
    
    return 0;
}
