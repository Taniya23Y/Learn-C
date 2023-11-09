// Passing 2-D Array to Function
/* Three ways of accessing a 2-D array */

#include <stdio.h>

// function declaration
int display(int *arr, int row, int col);
int show(int (*arr)[4], int row, int col); 
int printy(int arr[][4], int row, int col);
int main(int argc, char const *argv[])
{
    int arr1[3][4] = { 
                        1, 2, 3, 4, 
                        5, 6, 7, 8, 
                        9, 0, 1, 6 
                      };
    // clrscr();
    // function calling
    int get = display(*arr1,3,4);
    int sh = show(arr1,3,4);
    int pr = printy(arr1,3,4);
    return 0;
}

// function definition for display function
int display(int *arr, int row, int col){

    int i, j;
    for ( i = 0; i < row; i++)
    {
     printf("\n");
      for ( j = 0; j < col; j++)
      {
       printf("%d, ",*(arr+i*col+j));
      }
    }
    printf("\n");
}

// function definition for show function
int show(int (*arr)[4], int row, int col){

    int i, j;
    int *p;
    for ( i = 0; i < row; i++)
    {
        p = *arr + 1;
      printf("\n");
      for ( j = 0; j < col; j++)
      {
       printf("%d, ",*(p+j));
      }
    }
    printf("\n");
}


// function definition for printfunction
int printy(int arr[][4], int row, int col){

    
    int i, j;
    for ( i = 0; i < row; i++)
    {
      printf("\n");
      for ( j = 0; j < col; j++)
      {
        printf("%d, ",arr[i][j]);
      }
    }
    printf("\n");
}
